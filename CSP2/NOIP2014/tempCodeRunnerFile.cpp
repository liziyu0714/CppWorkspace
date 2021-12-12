#include <bits/stdc++.h>
using namespace std;

int gcd(int n , int m)
{
    return m ? gcd(m,n%m) : n;
}


int main()
{
    int A , B , L ;
    cin >> A >> B >> L;
    int A1 , B1 , n = 1;
    while(A1 > L || B1 > L)
    {
        A1 = A + n , B1 = B - n;
        int m = gcd(A1,B1);
        if(A1 % m == 0 && B1 % m == 0)
            A1 /= m , B1 /= m;
        n ++;
    }
    cout << A1 << " " << B1 << endl;
    return 0;
}
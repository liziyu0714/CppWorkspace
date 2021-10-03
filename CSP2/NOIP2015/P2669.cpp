#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , sum = 0 , m = 1 ;
    cin >> n;
    while(n > 0)
    {
        m = n;
        while(m > 0)
        {
            sum += n;
            m --;
        }
        n --;
    }
    cout << sum << endl;
}
#include <bits/stdc++.h>
using namespace std;

int digit(int num,int pos)
{
    int tmp = 0 , i = 0 ;
    while (i < pos)
    {
        tmp = num % 10 , num /= 10 , i ++;
        if(num <= 0) return -1;
    }    
    return tmp;
}

int main()
{
    int n = 0 , k = 0 ; 
    cin >> n >> k;
    cout << digit(n,k) << endl;
}
#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2 ; i * i <= n ; i ++)
        if(n%i == 0) return false;
    return true;
}
 
int main()
{
    int n = 0 , ans = 0 ,tmp = 0;
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        if(IsPrime(tmp)) ans ++;
    }
    cout << ans;
}

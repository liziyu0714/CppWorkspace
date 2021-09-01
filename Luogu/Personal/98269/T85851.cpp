#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n)
{
    if(n < 2) return false;
    int a = floor(sqrt(n));
    for (int i = 2; i <= a; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n = 0 , ans = 1;
    cin >> n;
    for(int i = 3 ; i <= n - 2 ; i ++)
        if(IsPrime(i) && IsPrime(i + 2)) ans ++;
    if(n <= 2) ans = 0;
    cout << ans;
    return 0;
}
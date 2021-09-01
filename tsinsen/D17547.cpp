#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    if (m > 0)
        return gcd(m, n % m );
    else
        return n;
}

int main()
{
    int m = 0 , n = 0 , ans = 0 ;
    cin >> m >> n;
    int k = gcd(m,n);
    m /= k;
    n /= k;
    if(m >= n )
    {
        while(m >= n )
        {
            m -= n ;
            ans ++;
        }
        cout << "(" << ans << ")";
    }
    else cout << "(0)" ;
    if(m!=0) cout << m << "/" << n;
    return 0;
}
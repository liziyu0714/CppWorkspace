#include <bits/stdc++.h>
using namespace std;

int primes[100000] , len = 0;

bool IsPrime(int n)
{
    if(n < 2) return false;
    int l = floor(sqrt(n));
    for(int i = 2 ; i <= l ; i ++)
        if(n % i == 0)
            return false;
    return true;
}

void Find(int n)
{
    for(int i = 2 ; i <= n ; i ++)
        if(IsPrime(i))
            primes[len ++] = i;
}

int main()
{
    int n = 0 ;
    cin >> n;
    Find(n);
    for(int i = len - 1 ; i >= 0 ; i --)
    {
        if(IsPrime(n / primes[i]))
        {
            cout << primes[i];
            break;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int primes[1400], len = 0;

bool IsPrime(int n)
{
    int a = floor(sqrt(n));
    for (int i = 2; i <= a; i++)
        if (n % i == 0)
            return false;
    return true;
}

void GetPrimes(int n)
{
    for (int i = 2; i <= n; i++)
        if (IsPrime(i))
            primes[len++] = i;
}

void Output(int num)
{
    for (int i = 0; i < len; i++)
    {
        if ((num % 2 == 0) && IsPrime(num - primes[i]))
        {
            cout << num << "=" << primes[i] << "+" << num - primes[i] << endl;
            break;
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    GetPrimes(n);
    for (int i = 4; i <= n; i++)
        Output(i);
    return 0;
}
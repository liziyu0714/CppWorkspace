#include <bits/stdc++.h>
using namespace std;

int a[10] , n = 0;

bool Isprime(int n)
{
    if(n < 2) return false;
    int k = floor(sqrt(n));
    for(int i = 2 ; i <= k ; i ++)
        if(n % i == 0) return false;
    return true;  
}

int Make(int n)
{
    int p = 1 , ans = 0;
    for(int i = n ; i >= 1 ; i --)
    {
        ans += a[i] * p;
        p *= 10;
    }
    return ans;
}

void DFS(int step)
{
    if(step > n)
    {
        cout << Make(n) << endl;
        return;
    }
    for(int i = 1 ; i < 10 ; i ++)
    {
        a[step] = i;
        if(Isprime(Make(step)))
            DFS(step + 1);
        a[step] = 0;
    }
}

int main()
{
    cin >> n;
    DFS(1);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    return (n <= 2) ? n : f(n - 1) + f (n - 2);
}

int main()
{
    int n = 0 ;
    cin >> n ;
    cout << f(n - 1) << endl;
}
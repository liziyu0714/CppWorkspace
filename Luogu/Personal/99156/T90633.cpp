#include <bits/stdc++.h>
using namespace std;
long long List[90];

long long F(int n)
{
    if(List[n] != 0) return List[n];
    if(n <= 2) return n;
    List[n] = F(n - 1) + F(n - 2);
    return List[n];
}

int main()
{
    int n = 0;
    cin >> n;
    cout << F(n) << endl;
    return 0;
}
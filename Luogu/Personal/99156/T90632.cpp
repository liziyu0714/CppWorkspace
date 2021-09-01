#include <bits/stdc++.h>
using namespace std;

void F(int n)
{
    if(n == 0) return;
    F(n/8);
    cout << n % 8;
}

int main()
{
    int n = 0;
    cin >> n;
    if(n == 0 ) cout << 0;
    else F(n);
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int add(int n)
{
    if (n == 1)
        return 1;
    else
        return n + add(n - 1);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << add(n) << endl;
}
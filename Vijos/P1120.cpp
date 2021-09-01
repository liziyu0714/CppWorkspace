#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i ; j++)
            cout << " ";
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << num;
            num = (num + 2) % 10;
        }
        cout << endl;
    }
    return 0;
}
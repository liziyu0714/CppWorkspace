#include <bits/stdc++.h>
using namespace std;

void InOutput()
{
    char c;
    cin >> c;
    if(c != '!')
        InOutput();
    cout << c;
    return;
}

int main()
{
    InOutput();
    cout << endl;
    return 0;
}
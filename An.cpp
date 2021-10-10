#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
    srand(time(0));
    while(true)
    {
        int v = rand() % 1000;
        for(int i = 0 ; i < v ; i ++)
            cout << (char)(rand() % (110 - 32 + 1) + 32);
        system("pause");
    }
    return 0;
}
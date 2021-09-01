#include <bits/stdc++.h>
#define MAX 110
using namespace std;

void Read(int a[MAX][MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    return;
}

void Output(int a[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return;
}

void Change(int a[MAX][MAX], int length, char op)
{
    int tmp[MAX][MAX] = {{0}};
    for (int x = 0; x < length; x++)
        for (int y = 0; y < length; y++)
            switch (op)
            {
            case 'A':
                tmp[y][length - 1 - x] = a[x][y];
                break;
            case 'B':
                tmp[length - 1 - y][x] = a[x][y];
                break;
            case 'C':
                tmp[x][length - 1 - y] = a[x][y];
                break;
            case 'D':
                tmp[length - 1 - x][y] = a[x][y];
                break;
            }
    for (int i = 0; i < length; i++)
        for (int j = 0; j < length; j++)
            a[i][j] = tmp[i][j];
    return;
}

void ReadOp(int a[MAX][MAX] , int n)
{
    string s;
    cin >> s;
    int l = s.length();
    for(int i = 0 ; i < l ; i ++)
        Change(a,n,s[i]);
}

int main()
{
    int a[MAX][MAX] = {{0}}, n = 0;
    Read(a, n);
    ReadOp(a,n);
    Output(a, n);
    return 0;
}
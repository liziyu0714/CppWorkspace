#include <bits/stdc++.h>
using namespace std;

void DFS(int cost , int x ,int y);
void Readp();
int main();

int m;
char p[100][100];

int main()
{
    Readp();

}

void Readp()
{
    int n , tmpx , tmpy;
    char tmpc;
    cin >> m >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> tmpx >> tmpy >> tmpc;
        p[tmpx][tmpy] = tmpc;
    }
    return;
}

void DFS(int cost , int x ,int y)
{
    if(x == m && y == m)
    {
        
    }
}
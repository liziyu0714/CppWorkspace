#include <bits/stdc++.h>
using namespace std;

int g[1010][1010] , n , m , ans ;
int dx[3] = {0,0,1};
int dy[3] = {1,-1,0};
bool vh[1010][1010] , flag;

void readp()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ; j ++)
            cin >> g[i][j];
}

bool check(int x , int y)
{
    if(x < 1 || x > n || y < 1 || y > m)
        return false;
    return true;
}

void DFS(int x , int y , int val)
{
    if(x == n && y == m)
    {
        if(!flag)
        {
            flag = true;
            ans = val;
        }
        else if(val > ans)
            ans = val;
        return;
    }
    for(int i = 0 ; i < 3 ; i ++)
    {
        int tx = x + dx[i] , ty = y + dy[i];
        if(check(tx,ty) && !vh[tx][ty])
        {
            vh[tx][ty] = true;
            DFS(tx,ty,val + g[tx][ty]);
            vh[tx][ty] = false;
        }
    }
}

int main()
{
    readp();
    DFS(1,1,g[1][1]);
    cout << ans << endl;
    return 0;
}
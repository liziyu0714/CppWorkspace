#include <bits/stdc++.h>
using namespace std;

int m , mincost;
int v[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int p[110][110];
bool flag;

void Readp()
{
    int n , tmpx , tmpy;
    int tmpv;
    cin >> m >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> tmpx >> tmpy ;
        cin >> tmpv;
        p[tmpx][tmpy] = tmpv + 1;
    }
    return;
}

bool check(int x , int y)
{
    if(x < 0 || y < 0 || x > m || y > m)
        return false;
    return true;
}

void DFS(int cost , int x ,int y , bool used)
{
    //最优化剪枝
    //if(cost >= mincost && flag )
        //return;
    //到达终点
    cout << cost << " " << x << " " << y << endl;
    if(x == m && y == m)
    {
        flag = true;
        mincost = cost;
    }
    for(int i = 0 ; i < 4 ; i ++)
    {
        int tmpx = x + v[i][0] , tmpy = y + v[i][1];
        if(check(tmpx,tmpy))
        {
            int tmpv = p[tmpx][tmpy];
            p[tmpx][tmpy] = 3;
            if(p[tmpx][tmpy] != 0 && p[tmpx][tmpy] != 3)
            {
                if(p[tmpx][tmpy] != p[x][y])
                    DFS(cost + 1 , tmpx , tmpy , false);
                else
                    DFS(cost , tmpx , tmpy , false);
            }
            else
                if(!used)
                    DFS(cost + 2 , tmpx , tmpy , true);
            p[tmpx][tmpy] = tmpv;
        }
    }
}

int main()
{
    Readp();
    cout << endl;
    DFS(0,1,1,false);
    cout << mincost << endl;
    return 0;
}
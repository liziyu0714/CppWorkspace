#include <bits/stdc++.h>
#define MAXN 40
using namespace std;

struct point
{
    int x , y;
};

//读入数组
void Read();
//检查坐标
bool Check(int x , int y);
//深度优先搜索
void DFS(int step , int x , int y);
//输出
void Output();
//主程序
int main();

int g[MAXN][MAXN] ,  ans_step = MAXN * MAXN + 1 , n = 0 , m = 0;
int dp[MAXN][MAXN];//记忆化搜索,防TLE
int t[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
point way[MAXN * MAXN] , answay[MAXN * MAXN] ;

int main()
{   
    Read();
    memset(dp,1,sizeof(dp));
    answay[1].x = 1, answay[1].y = 1;
    DFS(2,1,1);
    Output();
    return 0;
}

void Read()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ; j ++)
            cin >> g[i][j];
    return;
}

bool Check(int x , int y)
{
    if(x < 1 || y < 1)
        return false;
    if(x > n || y > m)
        return false;
    return true;
}

void DFS(int step , int x , int y)
{
    if(x == n && y == m)
    {
        if(step < ans_step)
        {
            ans_step = step;
            for(int i = 2 ; i < step ; i ++)
                answay[i] = way[i];
        }
        return;
    }
    if(step >= dp[x][y]) return;//若找到了比上次差的解,放弃继续搜索
    else dp[x][y] = step; //否则找到一个更优解
    for(int i = 0 ; i < 4 ; i ++)
    {
        int tmpx = x + t[i][0] , tmpy = y + t[i][1];
        if(Check(tmpx,tmpy) && g[tmpx][tmpy] != 1)
        {
            way[step].x = tmpx , way[step].y = tmpy;
            g[tmpx][tmpy] = 1;
            DFS(step + 1,tmpx,tmpy);
            g[tmpx][tmpy] = 0;
        }
        else continue;
    }
}

void Output()
{
    if(ans_step !=  MAXN * MAXN + 1)
    {
        cout << ans_step - 1 << endl;
        cout << "(" << answay[1].x << "," << answay[1].y << ")" ;
        for(int i = 2 ; i < ans_step ; i ++)
            cout << "-->" << "(" << answay[i].x << "," << answay[i].y << ")";
        cout << endl;
    }
    else cout << "No way" << endl;
    return;
}
#include <bits/stdc++.h>
using namespace std;
#define MAXN 40

struct point
{
    int x , y , step;
};
int g[MAXN][MAXN] ,  ans_step = MAXN * MAXN + 1 , n = 0 , m = 0;
int t[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
queue<point> myqueue;

void Read();
bool Check(int x , int y);
void BFS();

int main()
{
    Read();
    BFS();
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

void BFS()
{
    //初始化队列
    point first;
    first.x = 1 , first.y = 1 , first.step = 0;
    myqueue.push(first);
    while (!myqueue.empty())
    {
        //取出队首元素
        point a = myqueue.front();
        //还原状态
        g[a.x][a.y] = 0;
        //目标状态
        if(a.x == n && a.y == m)
        {
            cout << a.step + 1 << endl;
            return;
        }
        for(int i = 0 ; i < 4 ; i ++)
            if(Check(a.x + t[i][0] , a.y + t[i][1]) && g[a.x + t[i][0]] [a.y + t[i][1]] != 1)
            {
                point b;
                b.x = a.x + t[i][0] , b.y = a.y + t[i][1] , b.step = a.step + 1;
                g[b.x] [b.y] = 1;
                myqueue.push(b);
            }
        myqueue.pop();
    }
    
}
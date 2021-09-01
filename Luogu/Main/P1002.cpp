#include <bits/stdc++.h>
#define LL long long
using namespace std;

bool s[40][40];//是否可以走
int p[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}}; //马可以走到的地方
LL dp[40][40];//记忆化搜索

void Cul(int x, int y) //计算马的控制点
{
    s[x][y] = true;
    for (int i = 0; i < 8; i++)
        if((x+p[i][0] >= 0) && (y + p[i][1] >=0) )//防止越界
            s[x + p[i][0]][y + p[i][1]] = true;
}

// i : 当前的x值 j :当前的y值
// x : 目标x值 y :目标y值
LL Dp(int i, int j, int x,int y)
{
    if((i == x && y == x)) //到达目标点,有一种方法
        return 1;
    if(i > x || j > y) //越界
        return 0;
    if(s[i][j]) //马的控制点
        return 0;
    if(dp[i+1][j] == 0)
        dp[i+1][j] = Dp(i + 1 , j , x ,y);
    if(dp[i][j+1] == 0)
        dp[i][j + 1] = Dp(i,j+1,x,y);
    return dp[i+1][j]+dp[i][j+1];
}

int main()
{
    int i = 0 , j = 0 , x = 0 , y = 0;
    cin >> x >> y >> i >> j;
    Cul(i,j);
    cout << Dp(0,0,x,y);
    return 0;
}
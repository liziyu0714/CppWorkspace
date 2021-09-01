//交了3次最后一个点都超时，不慌，上记忆化搜索
#include <bits/stdc++.h>
using namespace std;

int n, cnt , dp[20][20];

int DFS(int push, int top)
{
    if (push == n + 1 && top == 0)
        return 1;
    int sum = 0;
    if (push <= n)
    {
        if(dp[push + 1][top + 1] == 0)
            dp[push + 1][top + 1] = DFS(push + 1, top + 1);
        sum += dp[push + 1][top + 1];
    }
    if (top > 0)
    {
        if(dp[push][top - 1] == 0)
            dp[push][top - 1] = DFS(push, top - 1);
        sum += dp[push][top - 1];
    }
    return sum;
}

int main()
{
    cin >> n;
    cout << DFS(1,0) << endl;
    return 0;
}
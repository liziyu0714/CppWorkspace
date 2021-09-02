#include <bits/stdc++.h>
using namespace std;

double total , max_cap , miles , price , money , ans = 1e20;
int num;
double prices[55] , dis[55];

void read()
{
    cin >> total >> max_cap >> miles >> money >> num;
    for(int i = 1 ; i <= num ; i ++)
        cin >> dis[i] >> prices[i];
    dis[num + 1] = total;
    return;
}

void DFS(int now , double oil , double cost )
{
    if(cost > ans) return;//最优化剪枝
    if(now == num + 1) //到站
    {
        if(cost < ans)
            ans = cost;
        return;
    } 
    if(oil * miles >= dis[now + 1] - dis[now])
    {
        if(oil >= max_cap / 2)
            DFS(now + 1 , oil - (dis[now + 1] - dis[now]) / miles , cost);
        else
        {
            DFS(now + 1 , oil - (dis[now + 1] - dis[now]) / miles , cost);
            DFS(now + 1 , max_cap - (dis[now + 1] - dis[now]) / miles , cost + 20 + (max_cap - oil) * prices[now] );
        }
    }
    else
        DFS(now + 1 , max_cap - (dis[now + 1] - dis[now]) / miles , cost + 20 + (max_cap - oil) * prices[now] );
}

int main()
{
    read();
    DFS(1,max_cap - dis[1] / miles , money);
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}
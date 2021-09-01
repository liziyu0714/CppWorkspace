#include <bits/stdc++.h>
using namespace std;

int num, type, price[110];
bool finished[110];

void read()
{
    cin >> num >> type;
    for (int i = 1; i <= type; i++)
        cin >> price[i];
}

void DFS(int rest , int next , int sum)
{
    finished[sum] = true;
    if(rest == 0 || next > type)
        return;
    for (int i = 0; i <= rest; i++)
        DFS(rest - i , next + 1 , sum + price[next] * i);
}

int count()
{
    int ans = 1;
    while(finished[ans + 1] == 1)
        ans ++;
    return ans;
}

int main()
{
    read();
    DFS(num,0,0);
    cout << count() << endl;
    return 0;
}
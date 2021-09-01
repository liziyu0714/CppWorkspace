#include <bits/stdc++.h>
using namespace std;

//求n的全排列,a为已经填好的数组
int n = 0, a[15] = {0};
//vhash代表是否使用过该数字
bool vhash[15];

void DFS(int step)
{
    if (step > n) //已经填完
    {
        for (int i = 1; i <= n; i++)
            cout << setw(5) << a[i];
        cout << endl;
        return;
    }
    //还没有填完时
    for (int i = 1; i <= n; i++)
    {
        if (!vhash[i]) //不重复
        {
            //填数
            a[step] = i;
            vhash[i] = true;
            //搜索
            DFS(step + 1);
            //恢复状态
            vhash[i] = false;
            a[step] = 0;
        }
        else
            continue;
    }
}

int main()
{
    cin >> n;
    DFS(1);
    return 0;
}
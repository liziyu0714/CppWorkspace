#include <bits/stdc++.h>
using namespace std;

//a[i]表示第i列的皇后在a[i]行
int a[15] , n = 0 , cnt = 0 ;
bool vhash[15];

void DFS(int step)
{
    if(step > n) //填好了
    {
        for(int i = 1 ; i <= n ; i ++)
            cout << a[i] << " ";
        cout << endl;
        cnt ++;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        bool flag = true;
        for(int j = 1 ; j < step ; j ++)
            if(a[j] == i || abs(a[j] - i) == abs(step - j))
                flag = false;
        if(flag)
        {
            a[step] = i;
            DFS(step + 1);
            a[step] = 0;
        }
    }
}

int main()
{
    cin >> n;
    DFS(1);
    if(cnt == 0)
        cout << "no solute!" << endl;
    else 
        cout << cnt << endl;
    return 0;
}
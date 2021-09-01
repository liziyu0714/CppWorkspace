#include <bits/stdc++.h>
using namespace std;

//状态
int a[21] , n = 0 , r = 0;
bool vhash[21];

void DFS(int step , int pre)
{
    if(step > r)
    {
        for(int i = 1 ; i <= r ; i ++)
            cout << setw(3) << a[i] ;
        cout << endl;
        return;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        if(!vhash[i] && i > pre)
        {
            a[step] = i;
            vhash[i] = true;
            DFS(step + 1 , i);
            vhash[i] = false;
            a[step] = 0;
        }
    }
}

int main()
{
    cin >> n >> r;
    DFS(1 , 0);
    return 0;
}
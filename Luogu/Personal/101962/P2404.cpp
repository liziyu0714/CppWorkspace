#include <bits/stdc++.h>
using namespace std;

int a[10] ,  n = 0 ;

void DFS(int step , int res , int pre)
{
    if(res == 0 && step != 2)
    {
        cout << a[1];
        for(int i = 2 ; i < step ; i ++)
            cout << '+' << a[i];
        cout << endl;
        return;
    }
    for(int i = 1 ; i <= res ; i ++)
    {
        if(i >= pre)
        {
            a[step] = i;
            DFS(step + 1 , res - i , i);
            a[step] = 0;
        }
        else continue;
    }
}

int main()
{
    int n = 0 ; 
    cin >> n ;
    DFS(1,n,1);
    return 0;
}
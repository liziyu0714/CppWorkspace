#include <bits/stdc++.h>
using namespace std;

int n;
int g[1000][1000];

int add(int value)
{
    if(value < 4)
        return value + 1;
    else return 1;
}

int main()
{
    int i = 0 , j = 1 ;
    cin >> n;
    int cnt = 1 , v = 0 ;
    while(cnt <= n * n)
    {
        if(i == 0 && j == 1)
        {
            g[1][1] = 1;
            i ++ , cnt ++;
            continue;
        }
        if(v == 0 && i + 1 <= n)
            i ++;
        else if(v == 1 && j + 1 <= n)
            j ++ ;
        else if(v == 2 && i - 1 >= 1)
            i --;
        else if(v == 3 && j - 1 >= 1 )
            j --;
        else 
        {
            v = add(v);
            continue;
        }
        g[i][j] = cnt;
        cnt ++;
    }
    int k , l;
    cin >> k >> l;
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= n ; j ++)
            cout << g[i][j] << " " ;
        cout << endl;
    }
    cout << g[k][l] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int v [8][2] = {{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1}};
char p[110][110];

int main()
{
    int m = 0 , n = 0 ;
    cin >> m >> n;
    for(int i = 0 ; i < m ; i ++)
        for(int j = 0 ; j < n ; j ++)
            cin >> p[i][j];
    for(int i = 0 ; i < m ; i ++)
        for(int j = 0 ; j < n ; j ++)
            if(p[i][j] == '?')
            {
                int ans = 0;
                for(int k = 0 ; k < 8 ; k ++)
                    if(i + v[k][0] >= 0 && j + v[k][1] >= 0)
                        if(p [ i + v [ k ] [ 0 ] ] [ j + v [ k ] [ 1 ]] == '*')
                            ans ++;
                p[i][j] = ans + '0';
            }
    for(int i = 0 ; i < m ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
            cout << p[i][j];
        cout << endl;
    }
    return 0;
}
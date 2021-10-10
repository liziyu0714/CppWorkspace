#include <bits/stdc++.h>
using namespace std;

int n , m ;
int d[8][2] = {{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1}};
bool g[110][110];

void readp()
{
    cin >> n >> m;
    char tmp;
    for(int i = 0 ; i < n ; i ++)
        for(int j = 0 ; j < m ; j ++)
            {
                cin >> tmp;
                g[i][j] = (tmp == '?') ? 0 : 1 ;
            }
    return ;
}

bool check(int x , int y)
{
    if(x < 0 || y < 0 || x >= n || y >= m)
        return false;
    return true;
}

int countb(int x , int y)
{
    int sum = 0 ;
    for(int i = 0 ; i < 8 ; i ++)
    {
        int tx = x + d[i][0] , ty = y + d[i][1];
        if(check(tx , ty))
            if(g[tx][ty] == 1)
                sum ++;
    }
    return sum;
}

int main()
{
    readp();
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(g[i][j] == 1) cout << '*';
            else cout << countb(i,j);
        }
        cout << endl;
    }
    return 0;
}
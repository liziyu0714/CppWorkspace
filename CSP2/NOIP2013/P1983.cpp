#include <bits/stdc++.h>
using namespace std;

int n , m , s[1010] ,  stop[1010][1010];
int vh[1010];
bool cnt[1010];

void read()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i ++ )
    {
        cin >> s[i];
        for(int j = 1 ; j <= s[i] ; j ++)
            cin >> stop[i][j];
    }
    return;
}

bool check(int i)
{
    int t = vh[stop[i][1]];
    for(int k = stop[i][1] ; k <= s[i] ; k ++ )
        if(vh[k] > t)
            return false;
        else if(vh[k] == t)
        {
            bool flag = false;
            for(int j = 1 ; j <= s[i] ; j ++)
                if(stop[i][j] == k)
                    flag = true;
            if(!flag)
                return false;
        }
    return true;
}

int main()
{
    read();
    for(int i = 1 ; i < n ; i ++)
    {
        if(i != 1)
        {
            if(!check(i))
                for(int k = 1 ; k <= s[i] ; k ++)
                    vh[stop[i][k]] ++ ;
        }    
        else
        {
            for(int k = 1 ; k <= s[i] ; k ++)
                    vh[stop[i][k]] ++ ;
        } 
    }
    int sum = 0 ;
    for(int i = 1 ; i < n ; i ++) 
        if(!cnt[ vh[ i ] ])
        {
            sum ++ ;
            cnt[ vh[ i ] ] = true;
        }
    cout << sum << endl;
    return 0;
}
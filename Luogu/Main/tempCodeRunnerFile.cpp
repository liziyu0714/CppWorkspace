#include <bits/stdc++.h>
using namespace std;

struct pencil
{
    int cost , num;
} pencils [3];


int main()
{
    int n = 0 , mincost = 100000;
    cin >> n;
    for(int i = 0 ; i < 3; i ++)
    {
        int tmp = 0 , tmpcost = 0;
        cin >> pencils[i].num >> pencils[i].cost;
        while(tmp < n)
        {
            tmpcost += pencils[i].cost;
            tmp += pencils[i].num;
        }
        if(tmpcost < mincost) mincost = tmpcost;
    }
    cout << mincost << endl;
    return 0;
}
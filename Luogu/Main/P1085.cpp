#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time[7] = {0} , tmp1 = 0 , tmp2 = 0 , maxv = 0 , maxn = 0;
    for(int i = 0 ; i < 7 ; i ++)
    {
        cin >> tmp1 >> tmp2;
        time[i] = tmp1 + tmp2;
        if(time[i] > maxv )
        {
            maxv = time[i];
            maxn = i;
        }
    }
    cout << maxn + 1;
    return 0;
}
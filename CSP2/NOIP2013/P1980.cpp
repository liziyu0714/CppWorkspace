#include <bits/stdc++.h>
using namespace std;

int num[10];

int main()
{
    int n , x ;
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i ++)
        if(i < 10)
            num[i] ++;
        else
        {
            int t = i;
            while(t > 0)
            {
                num[t % 10] ++;
                t /= 10;
            }
        }
    cout << num[x] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h[10] = {0} , n = 0 , ans = 0;
    for(int i = 0 ; i < 10 ; i ++)
        cin >> h[i];
    cin >> n;
    for(int i = 0 ; i < 10 ; i ++)
        if(n + 30 >= h[i])
            ans ++;
    cout << ans << endl;
    return 0;    
}
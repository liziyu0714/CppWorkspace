#include <bits/stdc++.h>
using namespace std;

int p[30010];

int main()
{
    int w , n;
    cin >> w >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >> p[i];
    sort(p , p + n);
    int i = 0 , j = n - 1 , sum = 0;
    while(i <= j)
    {
        if(p[i] + p[j] <= w)
            sum ++ , i ++ , j --;
        else
            sum ++ , j --;
    }
    cout << sum << endl;
    return 0;
}
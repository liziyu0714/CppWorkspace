#include <bits/stdc++.h>
using namespace std;

int n , p , nums[1000010] ;
long long maxs[1000010];

void read()
{
    cin >> n >> p;
    for(int i = 1; i <= n ; i ++)
        cin >> nums[i];
}

void calmax()
{
    maxs[1] = nums[1];
    for(int i = 2 ; i <= n ; i ++)
    {
        if(nums[i] > maxs[i - 1])
            maxs[i] = nums[i];
        else maxs[i] = maxs[i - 1];
    }
}

int main()
{
    read();
    calmax();
    for(int i = 1 ; i <= n ; i ++)
        cout << maxs[i] << " ";
}
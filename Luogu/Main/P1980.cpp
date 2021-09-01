#include <bits/stdc++.h>
using namespace std;

int numof(int num,int x)
{
    int ans = 0 ;
    while(num > 0)
    {
        if(num % 10 == x)
            ans ++ ;
        num /= 10;
    }
    return ans;
}

int main()
{
    int n = 0 , x = 0, sum = 0;
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i ++)
        sum += numof(i,x);
    cout << sum << endl;
    return 0;
}
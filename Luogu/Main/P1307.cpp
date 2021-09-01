#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0 , ans[10] = {0} , l = 0 , num = 0 , p = 1;
    bool flag = false;
    cin >> n;
    if(n < 0)
        flag = true , n = - n;
    while (n > 0)
    {
        ans[l ++] = n % 10;
        n /= 10;
    }
    if(flag)
        cout << "-";
    for(int i = l - 1 ; i >= 0; i --)
    {
        num += ans[i] * p;
        p *= 10;
    }
    cout << num << endl;
    return 0;
}
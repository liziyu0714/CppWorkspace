#include <bits/stdc++.h>
using namespace std;

bool cmp(int a , int b)
{
    if((a % 2 == 0) && (b % 2 != 0))
        return false;
    if((a % 2 != 0) && (b % 2 != 0) && (a < b))
        return false;
    if((a % 2 == 0) && (b % 2 == 0) && (a > b))
        return false;
    return true;
}

int a[100010];

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ;  i < n ; i ++)
        cin >> a[i];
    sort(a , a + n , cmp);
    for(int i = 0 ; i < n ; i ++)
        cout << a[i] << " ";
    return 0;
}
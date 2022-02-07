#include <bits/stdc++.h>
using namespace std;

int a[200010];

void output();

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i];
    sort(a , a + n);
    int pre = a[0] , cnt = 1;
    for(int i = 1 ; i < n ; i ++)
    {
        if(a[i] != pre)
        {
            cout << pre << " " << cnt << endl;
            pre = a[i] , cnt = 1;
        }
        else cnt ++;
    }
    cout << pre << " " << cnt << endl;
    return 0;
}
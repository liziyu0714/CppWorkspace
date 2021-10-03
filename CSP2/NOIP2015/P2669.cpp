#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , sum = 0 , m = 1 , cnt = 0;
    cin >> n;
    while(cnt < n)
    {
        int days = 0;
        while(days < m && cnt < n)
        {
            sum += m;
            days ++ , cnt ++;
        }
        m ++ ;
    }
    cout << sum << endl;
    return 0;
}
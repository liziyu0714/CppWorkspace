#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    double onestep = 2.0 , n = 0 , sum = 0 ;
    cin >> n ;
    while(sum < n)
    {
        sum += onestep;
        onestep *= 0.98;
        cnt ++;
    }
    cout << cnt << endl;
    return 0;
}
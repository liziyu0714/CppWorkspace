#include <bits/stdc++.h>
using namespace std;
const int MAX = 510;

string tmp;

int main()
{
    int a[MAX] = {0} , b[MAX] = {0} , c[MAX] = {0} , l = 0 ;
    cin >> tmp;
    l = tmp.length();
    for(int i = 0 ; i < l ; i ++)
        a[ l - i ] = tmp[i] - '0';
    a[0] = l;
    cin >> tmp;
    l = tmp.length();
    for(int i = 0 ; i < l ; i ++)
        b[ l - i ] = tmp[i] - '0';
    b[0] = l;
    l = max(a[0],b[0]);
    int g = 0;
    for(int i = 1 ; i <= l ; i ++)
    {
        c[i] = (a[i] + b[i] + g) % 10 ;
        g = (a[i] + b[i] + g) / 10;
    }
    if(g) c[l++] = g;
    c[0] = l;
    for(int i = 0 ; i < c[0] ; i ++)
        cout << c[c[0]-i];
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
#define MAXL 2010
using namespace std;

int a[MAXL] = {1,1} , b[MAXL] = {1,2} , c[MAXL];

void addbign(int z[] , int x[] , int y[])
{
    memset(z , 0 , sizeof(int) * MAXL);
    int len = max(x[0] , y[0]) , g = 0;
    for(int i = 1 ; i <= len ; i ++)
    {
        z[i] = x[i] + y[i] + g;
        g = z[i] / 10;
        z[i] %= 10;
    }
    if(g > 0) z[++len] = g;
    z[0] = len;
}

void printbign(int x[])
{
    for(int i = x[0] ; i > 0 ; i --)
        cout << x[i];
    cout << endl;
}

int main()
{
    int n ;
    cin >> n;
    for(int i = 0 ; i < n - 1; i ++)
    {
        addbign(c,a,b);
        memcpy(a,b,sizeof(int) * MAXL);
        memcpy(b,c,sizeof(int) * MAXL);
    }
    printbign(a);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int p[110];

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++)
        cin >> p[n - i + 1];
    cin >> p[0];
    for(int i = n ; i >= 1 ; i --)
    {
        if(p[i] < 0) printf("-");
        if(p[i] > 0 && i != n) printf("+");
        if(p[i] != 0 && abs(p[i]) != 1) printf("%dx^%d",abs(p[i]),i);
        if(abs(p[i]) == 1) printf("x^%d",i);
    }
    if(p[0] > 0)
        printf("+%d\n",p[0]);
    else printf("%d\n",p[0]);
    return 0;
}
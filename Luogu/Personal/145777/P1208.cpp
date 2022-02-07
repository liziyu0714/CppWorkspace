#include <bits/stdc++.h>
#define MAXN 5010
using namespace std;

struct mil
{
    int p , a;
}milk [MAXN];

bool cmp(mil a , mil b)
{
    return a.p < b.p;
}

int main()
{
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i ++)
        cin >> milk[i].p >> milk[i].a;
    sort(milk , milk + m , cmp);
    int sum = 0 , cost = 0;
    while(sum < n)
    {
        //找到第一个还有牛奶的人
        int p = 0;
        while(milk[p].a == 0) p ++;
        //买进
            //全买
        if(milk[p].a + sum <= n)
            sum += milk[p].a , cost += milk[p].a * milk[p].p , milk[p].a = 0;
            //按需购买
        else
        {
            int bought = n - sum;
            sum += bought , cost += milk[p].p * bought , milk[p].a -= bought;
        }
    }
    cout << cost << endl;
    return 0;
}
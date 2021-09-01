#include<bits/stdc++.h>
using namespace std;
struct People
{
    int k;
    int s;
};
bool cmp(People a,People b)
{
    if(a.s<b.s) return 0;
    else if(a.s==b.s){
        if(a.k>b.k) return 0;
        else return 1;
    }
        else return 1;
}
int main()
{
    People people[5000];
    int n=0,m=0,no=0,score=0,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d%d",&people[i].k,&people[i].s);
    sort(people,people+n,cmp);
    no=int(m*1.5);
    score=people[no-1].s;
    for(int i=0;i<=n;i++)
    {
        if(people[i].s>=score)
            ans++;
        else break;
    }
    printf("%d %d\n",score,ans);
    for(int i=0;i<=n;i++)
    {
        if(people[i].s>=score)
            printf("%d %d\n",people[i].k,people[i].s);
        else break;
    }
    return 0;
}
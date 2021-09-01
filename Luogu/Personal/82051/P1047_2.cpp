#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool Havetree[10000]={0};//为0表示树没被砍，为1表示被砍了
    int l=0,m=0,u=0,v=0,sum=0;
    scanf("%d%d",&l,&m);//因为距离是l,所以有(l+1)棵树
    for(int i=0;i<m;i++) //边读入边处理
    {
        scanf("%d%d",&u,&v);
        for(int j=u;j<=v;j++)
            Havetree[j]=1;
    }
    for(int i=0;i<=l;i++)//(l+1)棵树,统计没被砍的树
    {
        if(Havetree[i]==0)
            sum++;
    }
    printf("%d",sum);
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,m=0;
    int numbers[100]={};
    scanf("%d%d",&n,&m);//读入n、m
    for(int i=0;i<n;i++) scanf("%d",&numbers[i]);
    //先输出数组的后m位，再输出前n-m位
    m=m%n;//因为从上述角度考虑，大于n的m没有意义
    for(int i=n-m;i<n;i++) 
        printf("%d ",numbers[i]);
    for(int i=0;i<n-m;i++)
    {
        if(i==n-m-1) printf("%d",numbers[i]);
        else printf("%d ",numbers[i]);
    } 
    return 0;
}
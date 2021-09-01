#include<bits/stdc++.h>
using namespace std;
int no[26]={1,2,3 ,1,2,3 ,1,2,3 ,1,2,3 ,1,2,3 ,1,2,3,4 ,1,2,3 ,1,2,3,4};
int main()
{
    char txt[1000]="",tmp;
    int ntxt=0;
    int sum=0;
    while (true)
    {
        tmp=getchar();
        if(tmp=='\n') break;
        else txt[ntxt++]=tmp;
    }
    
    for(int i=0;i<ntxt;i++)
    {
        if(txt[i]>='a'&&txt[i]<='z')
        {
            sum+=no[(int)txt[i]-97];
        }
        else if(txt[i]==' ') sum+=1;
    }
    printf("%d",sum);
}
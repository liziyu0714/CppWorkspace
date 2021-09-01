#include<bits/stdc++.h>
using namespace std;
int numbers[17]={0,3,6,11,45,23,70,67,34,26,89,90,15,56,50,20,10};
int main()
{
    int start1 = 0 , start2 = 0 , end1 = 0 , end2 = 0 ;
    scanf("%d %d\n%d %d",&start1,&end1,&start2,&end2);
    if(start1 > start2)
    {
        swap(start1,start2);
        swap(end1,end2);
    }
    for(int i = 1 ; i < start1 ; i++)
        printf("%d ",numbers[i]);
    for(int i = start2 ; i <= end2 ; i++)
        printf("%d ",numbers[i]);
    for(int i = end1 + 1 ; i < start2 ; i++)
        printf("%d ",numbers[i]);
    for(int i = start1 ; i <= end1 ;i++)
        printf("%d ",numbers[i]);
    for(int i = end2 + 1 ; i <= 16 ; i++)
        printf("%d ",numbers[i]);
    return 0;
}

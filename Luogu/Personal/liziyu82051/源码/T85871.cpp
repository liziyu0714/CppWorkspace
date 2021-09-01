#include<bits/stdc++.h>
int main()
{
	int max=30001;
	int temp=0;
	int flag=0;
	int n=0,numbers[2000]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&numbers[i]);
    //选择排序
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(numbers[j]<max) {
				max=numbers[j];
				flag=j;
			}
		}
		temp=numbers[i];
		numbers[i]=max;
		numbers[flag]=temp;
		max=30001;
	}
	for(int i=0;i<n;i++)
		printf("%d ",numbers[i]);
    return 0;
}
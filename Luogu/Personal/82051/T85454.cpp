#include<bits/stdc++.h>
int main ()
{
	int n=0,numbers[20]={},a=0;
	bool IsDelete[20]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
        scanf("%d",&numbers[i]);
	scanf("%d",&a);
	for(int i=0;i<n;i++)
		if(numbers[i]==a)
		{
			IsDelete[i]=true;
			break;
		}
	for(int i=0;i<n;i++)
		if(!IsDelete[i])
			printf("%d ",numbers[i]);
	return 0;
}
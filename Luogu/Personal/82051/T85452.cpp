#include<bits/stdc++.h>
int numbers[10000]={};
int main()
{
	int n=0,a=0;
	bool Isfind=false;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&numbers[i]);
	scanf("%d",&a);
	for(int i=0;i<n;i++)
		if(numbers[i]==a)
		{
			printf("%d",i+1);
			return 0;
		}
	printf("%d",-1);
    return 0;
}
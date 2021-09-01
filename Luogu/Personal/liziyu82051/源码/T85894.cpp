#include<bits/stdc++.h>
int main ()
{
	int input[100][100]={{0}};
	int output[100][3]={{0}};
	int n=-1;
	int hang=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&input[i][j]);
			if(input[i][j]!=0)
			{
				hang++;
				output[hang][0]=i+1;
				output[hang][1]=j+1;
				output[hang][2]=input[i][j];
			}
		}
	for(int i=0;i<=hang;i++)
		for(int j=0;j<3;j++)
			if(j==2)
				printf("%d\n",output[i][j]);
			else
				printf("%d ",output[i][j] );
	return 0;
}
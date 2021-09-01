#include<bits/stdc++.h>
using namespace std; 
bool Havetree[10000]={false};
int main()
{
	int l=0,m=0,u=0,v=0;
	int cut=0;
	int number=0;
	scanf("%d%d",&l,&m);
	number=l+1;
	fill(Havetree,Havetree+l+1,1);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&u,&v);
		for(int j=u;j<=v;j++)
		{
			if(Havetree[j])
			{
				cut++;
				Havetree[j]=0;
			}
		}
		number-=cut;
		cut=0;
	}
	printf("%d",number);
}
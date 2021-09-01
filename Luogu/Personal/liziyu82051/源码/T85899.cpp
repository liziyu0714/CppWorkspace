#include<bits/stdc++.h>
using namespace std;
int main()
{
	int YangHui[20][20]={{0}},n=0;
	cin>>n;
	YangHui[0][0]=1;YangHui[1][0]=1;YangHui[1][1]=1;
	for(int i=2;i<n;i++)
	{
		YangHui[i][0]=1;
		for(int j=1;j<=i;j++)
			YangHui[i][j]=YangHui[i-1][j]+YangHui[i-1][j-1];
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<=i;j++)
	 		cout<<setw(6)<<YangHui[i][j]; 
		cout<<endl; 
	 }
	return 0;
 } 
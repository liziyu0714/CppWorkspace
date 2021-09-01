#include<bits/stdc++.h>
using namespace std;
int main()
{
    //使用了STL的set,其内部有序且不重复(数学意义上的集合)
	set <int> myset;
	int n=0,temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&temp);	
		myset.insert(temp); 
	}
	printf("%d\n",myset.size());
	for(set<int>::iterator it=myset.begin();it!=myset.end();it++)
		printf("%d ",*it);
    return 0;
}
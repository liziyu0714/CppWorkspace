#include<bits/stdc++.h>
int main ()
{
	int num[26]={};
	char txt[10000]="";
	scanf("%s",txt);
	for(int i=0;i<10000;i++)
		if(txt[i]>='a'&&txt[i]<='z')
			num[(int)txt[i]-97]++; 
	for(int i=0;i<26;i++)
		if(num[i]>0)
			printf("%c:%d\n",char(i+97),num[i]); 
 } 
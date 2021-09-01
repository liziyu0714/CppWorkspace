#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int s = 0 , e = 0;
	getline(cin,str);
	str.erase(str.end() - 1);
	str = " " + str + " ";
	for(int i = 1 ; i < str.length() - 1 ; i ++)
	{
		if(str [ i ] != ' ' && str [ i - 1 ] == ' ' )
			s = i ;
		if(str [ i ] == ' ' && str [ i - 1 ] != ' ')
		{
			e = i;
			reverse(str.begin() + s , str.begin() + e);
		}
	}
	str.erase(str.begin());
	str.erase(str.end() - 1);
	cout << str;
 } 

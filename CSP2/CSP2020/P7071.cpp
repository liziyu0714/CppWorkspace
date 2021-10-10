#include <bits/stdc++.h>
using namespace std;

bool t[10000000];

int main()
{
	int n;
	cin >> n;
	if(n % 2 != 0)
		cout << -1 << endl;
	else
	{
		int m = 2 ;
		while(m <= n)
		{
			t[m] = 1;
			m *= 2;
		}
		while(n > 0)
		{
			for(int i = n ; i > 0 ; i --)
				if(t[i])
				{
					cout << i << " " ;
					n -= i;
					break;
				}
		}
	}
	return 0;
}
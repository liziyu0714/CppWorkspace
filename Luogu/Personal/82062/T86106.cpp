#include <bits/stdc++.h>
using namespace std;
int a[25][25];
int n = 0;
int P(int m)
{
	if (m == -1)
		return n - 1;
	else
		return m;
}
int main()
{
	int  x = 0, y = 0;
	cin >> n;
	a[0][n / 2] = 1;
	x = 0;
	y = n / 2;
	for (int i = 2; i <= n * n; i++)
	{
		if (a[P(x - 1)][P(y - 1)] == 0)
		{
			x = P(x - 1);
			y = P(y - 1);
			a[ x ][ y ] = i;
		}
		else
		{
			x++;
			a[x][y] = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j] ;
		cout << "\n";
	}
	return 0;
}
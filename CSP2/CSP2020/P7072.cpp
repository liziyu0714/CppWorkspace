#include <bits/stdc++.h>
using namespace std;

int scores[100010];
int c[610];

int main()
{
	int n , w , p = 1;
	cin >> n >> w;
	for(int i = 1 ; i <= n ; i ++)
		cin >> scores[i];
	for(int i = 1 ; i <= n ; i ++)
	{
        c[scores[i]] ++ , p ++ ;
		int k = max( 1 , int( floor (  ( p - 1 ) * ( w * 0.01 ) ) ) );
		int t = 0 , cnt = 600 , nscore;
        while(t < k)
        {
            if(c[cnt] != 0 )
            {
                nscore = cnt;
                t += c[cnt];
            }
            cnt --;
        }
        cout << nscore << " ";
	}
	cout << endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
string s ;
int main()
{
    int R = 0 , l = 0 , ans = 0; 
    cin >> R >> s ;
    l = s.size();
    for( int i = 0 ; i < l ; i ++)
    {
        if(s[ i ] >= '0' && s[ i ] <= '9')
            ans = ans * R + s[ i ] - '0';
        else 
            ans = ans * R + s[ i ] - 'A' + 10;
    }
    cout << ans << endl ;
}
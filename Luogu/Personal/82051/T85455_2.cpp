#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[10010] = {0} , n = 0 , p = 0;
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i ++)
        scanf("%d" , & numbers[ i ]);
    scanf("%d" , &p);
    for(int i = 0 ; i < n ;i ++)
    {
        if( p < numbers[ i ] )
        {
            for(int j = n ; j > i ; j --)
                numbers[ j ] = numbers[ j - 1 ];
            n++;
            numbers[ i ] = p;
            break;
        }
        if( i == (n - 1))
        {
            numbers[ n ] = p;
            n ++;
            break; 
        }
    }
    for(int i = 0 ; i < n ; i ++)
        printf("%d " , numbers[ i ]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mins[ 5 ] = {0}, maxs [ 5 ] = {0};
    int a [ 5 ][ 5 ] = {0};
    for(int i = 0 ; i < 5 ; i ++)
        for(int j = 0 ; j < 5 ; j ++)
            scanf("%d" , & a [ i ] [ j ]);
    for(int i = 0 ; i < 5 ; i ++)
    {
        int min = a [ i ][ 0 ];
        for(int j = 0 ; j < 5 ; j ++)
            if(a [ i ] [ j ] < min)
                mins [ i ] = a [ i ][ j ];
    }
    for(int i = 0 ; i < 5 ; i ++)
    {
        int max = a [ 0 ][ i ];
        for(int j = 0 ; j < 5 ; j ++)
            if(a [ j ] [ i ] > max)
                maxs [ i ] = a [ j ][ i ];
    }
    for(int i = 0 ; i < 5 ; i ++)
        printf("min is %d\n" , i , mins [ i ]);
    for(int i = 0 ; i < 5 ; i ++)
        printf("max  is %d\n" , i , maxs [ i ]);
}
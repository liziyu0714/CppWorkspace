#include<bits/stdc++.h>
using namespace std;
int numbers[ 6 ][ 6 ];
int main()
{
    int max = 0  ,min = 0 , x = -1 , y = -1 , flag = 0;
    for(int i = 0 ; i < 5 ; i ++)
        for(int j = 0 ; j < 5 ; j++)
            scanf("%d" , & numbers[ i ][ j ]);
    for(int i = 0 ; i < 5 ; i ++)
    {
        min = numbers [ i ][ 0 ]; y = 0;
        for(int j = 1 ; j < 5 ; j ++)
            if(numbers[ i ][ j ] < min)
            {
                min = numbers [ i ][ j ] ;
                y = j ;
            }
        max = numbers [ 0 ][ i ]; x = 0 ;
        for(int  j = 1 ; j < 5 ; j ++ )
            if(numbers[ j ][ i ] > min)
            {
                max = numbers [ j ][ i ] ;
                x = i ;
            }
        if(min == max) break;
        else x = y =-1;
    }
    if(min==max) printf("(%d,%d):%d\n", x + 1 , y + 1, max);
    else printf("no");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int num [ 5 ] [ 5 ];
int main()
{
    bool a = 0 ;
    for (int i = 0 ; i < 5 ; i ++)
        for (int j = 0 ; j <5 ; j ++)
            scanf("%d" , & num[ i ] [ j ]);
    for(int i = 0 ; i < 5 ; i ++ )
    {
        int min =  num [ i ] [ 0 ] , minpos [ 5 ]= { 0 } , pos = 0;
        for(int j = 0 ; j < 5 ; j ++)
            if(num [ i ] [ j ] < min )  min = num [ i ] [ j ];
        for(int j = 0 ; j < 5 ; j ++)
            if ( num [ i ] [ j ] == min ) minpos [ pos ++] = j;
        for (int j = 0 ; j < pos ; j ++)
        {
            int max = num [ 0 ] [ minpos [ j ] ] , flag = 0;
            for(int k = 0 ; k < 5 ; k ++)
                if(num [ k ] [ minpos [ j ] ] > max)   
                {
                    max = num [ k ] [ minpos [ j ] ];
                    flag = k ;
                }
            if(max == num [ i ] [ minpos [ j ]])
            {
                printf("(%d,%d):%d" , flag + 1 , minpos [ j ] + 1, max);
                a = 1 ;
            }
               
        }
    }
    if ( a == 0 ) printf("no");
    return 0 ;
}

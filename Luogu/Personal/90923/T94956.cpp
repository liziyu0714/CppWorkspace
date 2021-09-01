#include<bits/stdc++.h>
using namespace std;
int main()
{
    char tmp , output [ 110 ];
    int pos = 0 ;
    tmp = getchar();
    while(tmp != '\n')
    {
        if(tmp != ' ' && tmp >= 'a' && tmp <= 'z')
            output [ pos ++ ] = tmp - 32 ;
        else
            output [ pos ++ ] = tmp;
        scanf("%c" , &tmp);
    }
    for(int i = 0 ; i < pos ; i ++ )
        printf("%c" , output [ i ]);
    return 0;
}
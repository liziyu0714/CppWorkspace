#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char txt[ 256 ];
    scanf("%s" , txt);
    int len = strlen(txt);
    for(int i = 0 ; i < len ; i ++)
        switch (txt [ i ])
        {
            case 'A' : printf("T");break;
            case 'T' : printf("A");break;
            case 'G' : printf("C");break;
            case 'C' : printf("G");break;
        }
    return 0;
}
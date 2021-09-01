#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = 1;
    char txt[100];
    scanf("%s" , txt);
    int len = strlen(txt);
    for(int i = 0 ; i <= len / 2 ; i ++)
        if(txt [ i ] != txt [ len - i - 1 ])
            flag = 0;
    if(flag)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}

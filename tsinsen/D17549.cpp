#include <bits/stdc++.h>
using namespace std;

int main()
{
    char tmp , maxC;
    int n = 0, a = 0, b = 0, c = 0, d = 0 , max = 0 ;
    bool flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        switch (tmp)
        {
        case 'A':case 'a':a++;break;
        case 'B':case 'b':b++;break;
        case 'C':case 'c':c++;break;
        case 'D':case 'd':d++;break;
        }
    }
    max = a; maxC = 'a';
    if(b > max)
    {
        max = b ; maxC ='b';
    }
    else if(b == max) flag = 1;
    if(c > max)
    {
        max = c ; maxC ='c';
    }
    else if(c == max) flag = 1;
    if(d > max)
    {
        max = d ; maxC ='d';
    }
    else if(d == max) flag = 1;
    if(flag == 1 || ((a == 0) && (b == 0) && (c == 0) && (d == 0)))
        cout << -1;
    else    cout << maxC;
}
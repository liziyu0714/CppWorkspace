#include <bits/stdc++.h>
using namespace std;

string s , w ;

int main()
{
    cin >> w;
    getchar();
    getline(cin,s);
    for(int i = 0 ; i < w.size() ; i ++)
        w[i] = tolower(w[i]);
    for(int i = 0 ; i < s.size() ; i ++)
        s[i] = tolower(s[i]);
    s = ' ' + s + ' ' , w = ' ' + w + ' ';
    int f = s.find(w)  , t = 0 , pos = 0;
    while(true)
    {
        pos = s.find(w,pos);
        if(pos == -1) break;
        t ++ , pos ++ ;
    }
    if(f != -1)
        cout << t << " " << f << endl;
    else cout << -1 << endl;
    
    return 0;
}
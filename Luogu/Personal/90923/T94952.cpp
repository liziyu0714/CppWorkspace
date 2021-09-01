#include <bits/stdc++.h>
using namespace std;

string s , word ;

int main()
{
    bool flag = 0;
    getline(cin,s);
    s = ' ' + s + ' ';
    for(int i = 1 ; i < s.length() ; i ++)
    {
        if(s[i] != ' ' && s[ i - 1] == ' ')//单词开头
        {
            word.clear();
        }        
        else if(s[ i ] == ' ' && s [ i - 1 ] != ' ')//单词结尾
        {
            if(!flag) 
            {
                cout << word;
                flag = 1;
            }
            else cout << " " << word;
        }
        word += s[i];
    }
    return 0;
}
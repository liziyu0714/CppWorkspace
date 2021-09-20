#include <bits/stdc++.h>
using namespace std;
string n[1000],q[1000];
int lenq[1000];

bool cmp(string a , string b)
{
    return (a.length() == b.length()) ? (a < b) : (a.length() < b.length());
}

int main()
{  
    int num1 , num2;
    cin >> num1 >> num2;
    for(int i = 0 ; i < num1 ; i ++)
        cin >> n[i];
    for(int i = 0 ; i < num2 ; i ++)
        cin >> lenq[i] >> q[i];
    sort(n,n + num1,cmp);
    for(int i = 0 ; i < num2 ; i ++)
    {
        bool flag = false;
        for(int j = 0 ; j < num1 ; j ++)
        {
            if(lenq[i] <= n[j].length())
                if(q[i] == n[j].substr(n[j].length() - lenq[i] , n[j].length()))
                {
                    cout << n[j] << endl;
                    flag = true;
                    break;
                }
        }
        if(!flag) cout << -1 << endl;
    }
    return 0;
}
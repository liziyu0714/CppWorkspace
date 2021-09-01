#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        for(int j = 0 ; j < i - 1 ; j ++)
            cout << " ";
        char c = 'a' + ( n - i ) * 2;
        for(int j = 0 ; j < ( n - i ) * 2 + 1 ; j ++)
        {
            cout<< c ;
            c --;
        }
        cout<<endl;
    }
    return 0;
}
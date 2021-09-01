#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void Hanoi(int n , char from , char mid , char to)
{
    if(n != 1)
    {
        Hanoi(n-1,from,to,mid);
        cout << from << "->" << to << endl;
        Hanoi(n-1,mid,from,to);
    }
    else
       cout << from << "->" << to << endl;     
    ans ++;
    return;
}

int main()
{
    int n = 0 ;
    cin >> n;
    Hanoi(n,'A','B','C');
    cout << ans << endl;
    return 0;
}
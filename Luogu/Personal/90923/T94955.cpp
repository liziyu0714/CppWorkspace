#include <bits/stdc++.h>
using namespace std;

string first , second;

int main()
{
    double n;
    int sum = 0 , same = 0;
    bool flag = 0;
    cin >> n >> first >> second;
    sum = first.length();
    for(int i = 0 ; i < sum ; i ++)
        if(first[i] == second[i])
            same ++;
    if(((double)same / (double)sum) >= n)  
        cout << "yes";
    else 
        cout << "no";
    return 0;
}
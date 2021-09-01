#include <bits/stdc++.h>
using namespace std;

struct person
{
    int score;
    string name;
}p [2010];

bool personcmp(person a ,person b)
{
    if(a.score < b.score || (a.score == b.score && a.name > b.name))
        return true;
    return false;
}

int main()
{
    int n = 0 ;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >> p[i].name >> p[i].score;
    for(int i = 0 ; i < n ; i ++)
        for(int j = i + 1 ; j < n ; j ++)
            if(personcmp(p[i],p[j]))
                swap(p[i],p[j]);
    for(int i = 0 ; i < n ; i ++)
        cout << p[i].name << " " << p[i].score << endl;
    return 0;
}
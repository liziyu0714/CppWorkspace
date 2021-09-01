#include <bits/stdc++.h>
using namespace std;

struct person
{
    string name;
    int score,classscore,num,value;
    bool a,b;
}p [100];


int main()
{
    int n = 0 , maxV = 0 , maxN = 0 , sum = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        char tmp; 
        p[i].value = 0;
        cin >> p[i].name;
        cin >> p[i].score;
        cin >> p[i].classscore;
        cin >> tmp;
        if(tmp == 'Y') p[i].a = true;
        else p[i].a = false;
        cin >> tmp;
        if(tmp == 'Y') p[i].b = true;
        else p[i].b = false;
        cin >> p[i].num;
        if(p[i].score > 80 && p[i].num > 0) p[i].value += 8000;
        if(p[i].score > 85 && p[i].classscore > 80)p[i].value += 4000;
        if(p[i].score > 90)p[i].value += 2000;
        if(p[i].score > 85 && p[i].b)p[i].value += 1000;
        if(p[i].classscore > 80 && p[i].a)p[i].value += 850;
        sum += p[i].value;
        if(p[i].value > maxV) 
        {
            maxV = p[i].value;
            maxN = i;
        }
     }
     cout << p[maxN].name << endl << maxV << endl << sum;
}
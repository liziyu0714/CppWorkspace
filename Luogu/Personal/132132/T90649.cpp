#include <bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    string name;
    int score[6];
    int sum = 0;
    void input()
    {
        cin >> id >> name ;
        for(int i = 1 ; i <= 5 ; i ++)
        {
            cin >> score[i];
            sum += score[i];
        }
    }
    void output()
    {
        cout << id << " " << name << " ";
        for(int i = 1 ; i <= 5 ; i ++)
            cout << score[i] << " ";
        cout << sum << endl;
    }
}stu[25];

int main()
{
    for(int i = 1 ; i <= 20 ; i ++)
        stu[i].input();
    for(int i = 1 ; i <= 20 ; i ++)
        for(int j = 1 ; j <= 20 ; j ++)
            if((stu[i].score == stu[j].score && stu[i].id > stu[j].id) ||stu[i].score < stu[j].score)
                swap(stu[i],stu[j]);
    for(int i = 1 ; i <= 20 ;  i ++)
        stu[i].output();
    return 0;
}
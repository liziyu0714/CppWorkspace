#include <bits/stdc++.h>
using namespace std;

int num, type, price[110], a[110] , ans = 0;
int vhash[110];
bool finished[110];

void read()
{
    cin >> num >> type;
    for (int i = 1; i <= type; i++)
        cin >> price[i];
}

void DFS(int step)
{
    int sum = 0;
    for (int i = 1; i <= step; i++)
        sum += a[i];
    if(sum > ans) ans = sum;
    if (step > num)
        return;
    for (int i = 1; i <= type; i++)
    {
        if (vhash[i] <= num)
        {
            vhash[i]++;
            a[step] = price[i];
            DFS(step + 1);
            vhash[i]--;
        }
    }
}

int main()
{
    read();
    DFS(0);
    cout << ans << endl;
    return 0;
}
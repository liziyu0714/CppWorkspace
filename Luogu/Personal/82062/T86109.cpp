#include <bits/stdc++.h>
using namespace std;
int numbers[3];
bool num[10];
int main()
{
    bool flag = 0;
    for (int i = 192; i <= 327; i++)
    {
        memset(num, 0, sizeof(num));flag = 0;
        numbers[0] = i;
        numbers[1] = i * 2;
        numbers[2] = i * 3;
        for (int k = 0; k < 3; k++)
            while (numbers[k] > 0)
            {
                num[numbers[k] % 10] = 1 ;
                numbers[k] /= 10;
            }
        for (int j = 1; j < 10; j++)
            if (num[j] == 0 || num[j] > 1)
                flag = 1;
        if(flag == 1)
            continue;
        printf("%d %d %d \n", i, i * 2, i * 3);
    }
    return 0;
}
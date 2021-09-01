#include<bits/stdc++.h>
using namespace std;
int num [20];
long long n;
int i;
void chaifen ()//将n拆分成数组
{
    i = 0; long long tmp = n ;
    memset(num , 0 , 20 * sizeof( int ));
    while(tmp > 0)
    {
        num [ i ++ ] = tmp % 10;
        tmp /= 10;
    }
    i -- ;
    return;
}
void qiuhe()//求abc + cba并覆盖到n
{
    long long p = 1 ;
    long long sum1 = 0 , sum2 = 0;
    for(int j = 0 ; j <= i ; j ++)
    {
        sum1 += num[ j ] * p;
        p *= 10;
    }
    p = 1;
    for(int j = i ; j >= 0 ; j --)
    {
        sum2 += num[ j ] * p;
        p *= 10;
    }
    n = sum1 + sum2 ;
    return;
}
bool IsHuiwen ()//判断是否回文数
{
    for ( int j = 0 ; j <= i / 2 ; j ++)
        if (num [ j ] != num [ i - j ])
            return false;
    return true;
}
int main () { 
 scanf("%lld" , &n);
 bool flag = 0 , flag2 = 0;
 chaifen();
 do{
 qiuhe();
 chaifen();
if ( i >= 15)
{
 flag = 1;
break;
   }
    }
    while (!IsHuiwen());
    if(!flag) printf("%lld" , n);
    else printf("-1");
    return 0;
}
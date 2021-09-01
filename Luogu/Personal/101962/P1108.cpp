#include <bits/stdc++.h>
using namespace std;

struct gas_station
{
    double distance , price;
};

//全局变量
gas_station stations[60];//加油站,为了方便处理将终点看做一个加油站。
int num = 0;//
double max_cap = 0 , miles = 0 , ans_price = 1e7 , start = 0;//max_cap是最大容量,miles是每公里行驶里程

//函数表列dfs
//读入函数
void read();
//深度优先搜索 
void DFS(double remain,int step,double price);
//主函数
int main();

int main()
{
    read();
    DFS(max_cap,0,start);
    cout << fixed << setprecision(1) << ans_price << endl;
    return 0;
}

void read()
{
    double tmp = 0;
    cin >> tmp;
    cin >> max_cap >> miles >> start >> num;
    for(int i = 1 ; i <= num ; i ++)
        cin >> stations[i].distance >> stations[i].price ;
    stations[++ num].distance = tmp;
}

void DFS(double remain,int step,double price)
{
    if(step > num) 
    {
        if(price < ans_price)
            ans_price = price;
        return;
    }
    if(stations[step + 1].distance - stations[step].distance < remain * miles)
        DFS(max_cap - (stations[step + 1].distance - stations[step].distance) / miles,step + 1 ,price += (max_cap - remain) * stations[step].price + 20);
    else if(remain <= max_cap / 2)
    {
        DFS(max_cap - (stations[step + 1].distance - stations[step].distance) / miles,step + 1 ,price += (max_cap - remain) * stations[step].price + 20);
        DFS(remain - (stations[step + 1].distance - stations[step].distance) / miles , step + 1 , price);
    }
    else if(remain - (stations[step + 1].distance - stations[step].distance) / miles > 0)
        DFS(remain - (stations[step + 1].distance - stations[step].distance) / miles , step + 1 , price);
    else return;
}
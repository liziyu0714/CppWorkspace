
#include<iostream>
using namespace std;
int a[11][11];
 
 
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin>>a[i][j];
    for(int i = 1; i <= n; i++) // 处理每一行，i为行号，这里行号从1开始
    {
        int min = a[i][1];
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] < min)       
                min = a[i][j];     //找出最小值
        }
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == min)    //最小值可能不止一个，所以出现一个最小值就检查它是否是该列的最大元素
            {
                int flag = 1;  //flag用来记录该值是否是该列的最大值
                for(int k = 1; k <=n; k++)
                {
                    if(a[k][j] > min)
                        flag = 0;    //如果该列有数比该数大，则说明该数不是该列的最小值，flag置0
                }
                if(flag == 1)
                {
                    cout<<"("<<i<<","<< j <<"):"<<min<<endl;
                    return 0;
                }
                    
                else
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
                   
            }
        }
    }
    
}
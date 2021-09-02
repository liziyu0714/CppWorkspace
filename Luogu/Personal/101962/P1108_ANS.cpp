#include <bits/stdc++.h>
using namespace std;
double dis, maxn, sl, money, ans;
//  终点-起点距离     汽车每升油能行驶的公里数
//              油箱容积             一开始付的钱
int n;
double s[51], dj[51];
void dfs(int to, double oil, double payed)
{
	//to为当前加油站序号， oil为当前油量， payed为已花钱数
	//	cout<<to<<" "<<oil<<" "<<payed<<endl;
	if (payed > ans)
		return; //剪枝
	if (to == n + 1)
	{ //到终点了
		ans = min(ans, payed);
		return;
	}
	if (oil * sl >= s[to + 1] - s[to])
	{ //油够到下一个加油站
		if (oil * 2 >= maxn)
		{ //油不少于一半（不加）
			dfs(to + 1, oil - (s[to + 1] - s[to]) / sl, payed);
		}
		else
		{
			dfs(to + 1, oil - (s[to + 1] - s[to]) / sl, payed);								  //加
			dfs(to + 1, maxn - (s[to + 1] - s[to]) / sl, payed + 20 + (maxn - oil) * dj[to]); //不加
		}
	}
	else
	{																					  //油不够到下一个加油站
		dfs(to + 1, maxn - (s[to + 1] - s[to]) / sl, payed + 20 + (maxn - oil) * dj[to]); //必须加
	}
}

int main()
{
	cin >> dis >> maxn >> sl >> money >> n;
	ans = money;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i] >> dj[i];
		ans += 20 + maxn * dj[i]; //把ans整大点
	}
	s[n + 1] = dis; //终点也标记上
	dfs(1, maxn - s[1] / sl, money);
	printf("%.1lf", ans);
	return 0;
}
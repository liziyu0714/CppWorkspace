#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n = 0 , ans = 0 , numbers [4] = {0};
	scanf("%d" , &n);
	while (n != 6174 && n != 0)
	{
		for (int i = 0; i < 4; ++i)
		{
			numbers [ i ] = n % 10 ;
			n /= 10 ;
		}
		sort(numbers , numbers + 4);
		int number1 = numbers [ 3 ] * 1000 +  numbers [ 2 ] * 100 + numbers [ 1 ] * 10 + numbers [ 0 ]  ;
		int number2 =  numbers [ 0 ] * 1000 +numbers [ 1 ] * 100 + numbers [ 2 ] * 10+ numbers [ 3 ];
		n = number1 - number2 ;
		printf("%d - %d = %d\n" , number1,number2,n);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int numbers[10000] = {0};
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &numbers[i]);
	numbers[n] = numbers[0];
	numbers[n + 1] = numbers[1];
	numbers[n + 2] = numbers[2];
	int max = -1, min = 40001;
	int k = numbers[0] + numbers[1] + numbers[2] + numbers[3];
	for (int i = 1; i < n; i++)
	{
		if (k > max)
			max = k;
		if (k < min)
			min = k;
		k = k - numbers[i - 1] + numbers[ i + 3 ];
	}
	printf("%d\n%d", max, min);
	return 0;
}
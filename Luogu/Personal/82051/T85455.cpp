#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0, numbers[1000] = {}, p = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
        scanf("%d", &numbers[i]);
	scanf("%d", &p);
	numbers[n] = p;
	sort(numbers, numbers + n + 1);
	for (int i = 0; i <= n; i++)
		printf("%d ", numbers[i]);
    return 0;
}
#include<cstdio>
int main()
{
	int n;
	int ans = 0;
	scanf("%d", &n);
	while (n!=1)
	{
		ans++;
		if (n % 2 == 0)
			n /= 2;
		else
			n = (3 * n + 1) / 2;
	}
	printf("%d", ans);
	return 0;
}

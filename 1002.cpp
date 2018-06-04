#include<cstdio>
#include<cstring>
const int maxn = 105;
char numstr[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
int main()
{
	char s[maxn];
	gets(s);
	int len = strlen(s);
	int sum = 0;
	int ans[maxn];
	int anslen = 0;
	for (int i = 0; i < len; i++)
	{
		sum += s[i] - '0';
	}
	if (sum == 0)
	{
		printf("ling");
	}
	else {
		while (sum != 0)
		{
			ans[anslen++] = sum % 10;
			sum /= 10;
		}
	}
	for (int i = anslen - 1; i >= 0; i--)
	{
		printf("%s", numstr[i]);
		if (i != 0)
			printf(" ");
	}
	return 0;
}

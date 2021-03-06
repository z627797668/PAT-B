#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn = 8888;//3n+1会很大
bool cmp(int a, int b)
{
	return a > b;
}
int hashtable[maxn] = { 0 };
int main()
{
	int k, n[105];
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &n[i]);
		int temp = n[i];
		while (temp!=1)
		{
			if (temp % 2 == 0)
			{
				temp = temp / 2;
				hashtable[temp]++;
			}
			else
			{
				temp = (3 * temp+1) / 2;
				hashtable[temp]++;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < k; i++)
	{
		if (hashtable[n[i]] == 0)
			count++;
	}
	sort(n, n + k, cmp);
	for (int i = 0; i < k; i++)
	{
		if (hashtable[n[i]] == 0)
		{
			printf("%d", n[i]);
			count--;
			if (count != 0)
				printf(" ");
		}
	}
	return 0;
}

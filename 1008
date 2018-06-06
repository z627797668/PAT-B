#include<stdio.h>
const int maxn = 105;
int main()
{
	int num[maxn];
	int N, M;
	int count = 0;
	scanf("%d %d", &N, &M);
	M=M%N;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int i = N-M; i < N; i++)
	{
		printf("%d", num[i]);
		cout++;
		if (count != N)
			printf(" ");
	}
	for (int i = 0; i < N-M; i++)
	{
		printf("%d", num[i]);
		count++;
		if (cout != N)
			printf(" ");
	}
	return 0;
}

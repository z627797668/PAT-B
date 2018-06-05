#include<stdio.h>
#include<string.h>
const int maxn = 105;
int main()
{
	char s[maxn];
	int n;
	scanf("%d\n", &n);
	while (n--)
	{
		gets(s);
		int len = strlen(s);
		int nump = 0;
		int numt = 0;
		int la = 0;
		int ma = 0;
		int ra = 0;
		int i;
		for (i = 0; i < len; i++)
		{
			if (s[i] == 'A' || s[i] == 'P' || s[i] == 'T')
			{
				if (s[i] == 'A'&&nump == 0 && numt == 0)
				{
					la++;
				}
				else if(s[i]=='A'&&nump==1&&numt==0)
				{
					ma++;
				}
				else if (s[i] == 'A'&&nump == 1 && numt == 1)
				{
					ra++;
				}
				else if(s[i]=='P'&&nump!=1)
				{
					nump++;
				}
				else if (s[i] == 'T'&&numt != 1)
				{
					numt++;
				}
				else
				{
					break;
				}
			}
			else
				break;
		}
		if (i != len||nump!=1||numt!=1)
			printf("NO\n");
		else
		{
			if (ra == (ma*la)&&ma!=0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}

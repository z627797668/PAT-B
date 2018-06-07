#include<stdio.h>
#include<string.h>
int main()
{
	char s[85];
	gets(s);
	int len = strlen(s);
	for (int i = len - 1; i >= 0;)
	{
		int j = i;
		int num = 0;
		char temp[85];
		while (s[j]!=' '&&j>=0)
		{
			temp[num++] = s[j];
			j--;
		}
		i = --j;
		for (int k = num-1;k>=0; k--)
		{
			printf("%c", temp[k]);
		}
		if (j >= 0)
			printf(" ");
	}
	return 0;
}
//
#include<stdio.h>
#include<string.h>
int main()
{
	char str[85];
	char ans[85][85];
	gets_s(str);
	int len = strlen(str);
	int count = 0;
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			ans[count][j++] = str[i];
		else {
			ans[count++][j] = '\0';
			j = 0;
		}
	}
	ans[count++][j] = '\0';
	for (int i = count-1; i >=0; i--)
	{
		printf("%s", ans[i]);
		if (i != 0)
			printf(" ");
	}
	return 0;
}

#include<stdio.h>
const int maxn = 105;
struct student
{
	char name[11];
	char id[11];
	int grade;
}stu[maxn];
int main()
{
	int n;
	scanf("%d", &n);
	int min=0, max=0;
	for (int i = 0; i <n; i++)
	{
		scanf("%s %s %d", stu[i].name, stu[i].id, &stu[i].grade);
		if (stu[i].grade > stu[max].grade)
			max = i;
		if (stu[i].grade < stu[min].grade)
			min = i;
	}
	printf("%s %s\n", stu[max].name, stu[max].id);
	printf("%s %s", stu[min].name, stu[min].id);
	return 0;
}

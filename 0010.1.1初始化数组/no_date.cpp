/*no_date.c--为了初始化数组*/
#include<stdio.h>
#define SIZE 4
int main02(void)
{
	int no_date[SIZE];		//未初始化数组
	int i;

	printf("%2s%14s\n", "i", "no_date[i]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, no_date[i]);
	}

	return 0;
}
//系统不同输出结果不同
/*
 i    no_date[i]
 0    -858993460
 1    -858993460
 2    -858993460
 3    -858993460
*/
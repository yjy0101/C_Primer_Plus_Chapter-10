/*somedate.c--部分初始化数组*/
#include<stdio.h>
#define SIZE 4
int main03(void)
{
	int some_date[SIZE] = { 1492, 1066 };
	int i;

	printf("%2s%14s\n", "i", "some_date[SIZE]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, some_date[i]);

	}

	return 0;
}

/*
 isome_date[SIZE]
 0          1492
 1          1066
 2             0
 3             0

*/
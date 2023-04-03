//designate.c--使用指定初始化器
#include<stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28,days[4] = 31, 30, 31,days[1] = 29 };
	int i;

	for (i = 0; i < MONTHS; i++)
	{
		printf("%2d %d\n", i + 1, days[i]);
	}

	return 0;
}

/*
 1 31
 2 29
 3 31
 4 30
 5 31
 6 29
 7 0
 8 0
 9 0
10 0
11 0
12 0
*/
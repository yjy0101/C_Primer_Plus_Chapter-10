/*no_date.c--Ϊ�˳�ʼ������*/
#include<stdio.h>
#define SIZE 4
int main02(void)
{
	int no_date[SIZE];		//δ��ʼ������
	int i;

	printf("%2s%14s\n", "i", "no_date[i]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, no_date[i]);
	}

	return 0;
}
//ϵͳ��ͬ��������ͬ
/*
 i    no_date[i]
 0    -858993460
 1    -858993460
 2    -858993460
 3    -858993460
*/
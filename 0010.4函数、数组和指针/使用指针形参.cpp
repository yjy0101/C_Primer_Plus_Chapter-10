/*����Ԫ��֮��*/
#include<stdio.h>
#define SIZE 10
int sump(int* start, int* end);
int main02(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sump(marbles, marbles + SIZE);			//��ַ��10λ��SIZE��
	printf("The total number of marbles is %ld.\n", answer);


	return 0;
}

/*ʹ��ָ���㷨*/
int sump(int* start, int* end)
{
	int total = 0;
	while (start < end)
	{
		total += *start;	//������Ԫ�ص�ֵ������
		start++;			//��ָ��ָ����һ��Ԫ��
	}

	return total;
}

/*
The total number of marbles is 190.
*/
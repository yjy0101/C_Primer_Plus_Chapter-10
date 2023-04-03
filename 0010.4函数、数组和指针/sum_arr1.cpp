/*sum_arr1.c--数组元素之和*/
#include<stdio.h>
#define SIZE 10
int sum(int ar[], int n);	//这里四种原型都是等价的：int sum(int *ar, int n); int sum(int [], int);
							//						int sum(int *, int); int sum(int ar[], int n);
int main01(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));

	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		total += ar[i];

	}
	printf("The size of ar is %zd bytes.\n", sizeof(ar));

	return total;
}

/*
The size of ar is 8 bytes.
The total number of marbles is 190.
The size of marbles is 40 bytes.
*/
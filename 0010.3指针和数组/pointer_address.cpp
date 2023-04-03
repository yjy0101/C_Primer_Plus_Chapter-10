/*pointer_address.c--指针地址*/
#include<stdio.h>
#define SIZE 4
int main01(void)
{
	short dates[SIZE];	//数组名是数组首元素的地址
	short* pti;
	short index;
	double bills[SIZE];
	double* ptf;
	pti = dates;		//把数组地址赋给指针
	ptf = bills;

	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
	{
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
	}												//指针加1指的是增加一个存储单元
													//short 类型占用2个字节， double 类型占用8个字节
	return 0;										//在指针前面使用 *运算符可以得到该指针所指向对象的值
													//指针加1，指针的值递增它所指向类型的大小（以字节为单位）
}

/*
				  short          double
pointers + 0: 00000055CEEFF678 00000055CEEFF6D8			
pointers + 1: 00000055CEEFF67A 00000055CEEFF6E0
pointers + 2: 00000055CEEFF67C 00000055CEEFF6E8
pointers + 3: 00000055CEEFF67E 00000055CEEFF6F0
*/
/*pointer_address.c--ָ���ַ*/
#include<stdio.h>
#define SIZE 4
int main01(void)
{
	short dates[SIZE];	//��������������Ԫ�صĵ�ַ
	short* pti;
	short index;
	double bills[SIZE];
	double* ptf;
	pti = dates;		//�������ַ����ָ��
	ptf = bills;

	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
	{
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
	}												//ָ���1ָ��������һ���洢��Ԫ
													//short ����ռ��2���ֽڣ� double ����ռ��8���ֽ�
	return 0;										//��ָ��ǰ��ʹ�� *��������Եõ���ָ����ָ������ֵ
													//ָ���1��ָ���ֵ��������ָ�����͵Ĵ�С�����ֽ�Ϊ��λ��
}

/*
				  short          double
pointers + 0: 00000055CEEFF678 00000055CEEFF6D8			
pointers + 1: 00000055CEEFF67A 00000055CEEFF6E0
pointers + 2: 00000055CEEFF67C 00000055CEEFF6E8
pointers + 3: 00000055CEEFF67E 00000055CEEFF6F0
*/
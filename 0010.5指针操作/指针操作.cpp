#include<stdio.h>
int main(void)
{
	int urn[5] = { 100, 200, 300, 400, 500 };
	int* ptr1, * ptr2, * ptr3;
	
	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//ptr1��ӡ����urn[0]�ĵ�ַ��&ptr1��ӡ����ָ��ĵ�ַ

	//ָ��ӷ�
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;				//����ָ��
	printf("\nvalues after ptr++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	ptr2--;				//�ݼ�ָ��
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	--ptr1;				//�ָ�Ϊ��ʼֵ
	++ptr2;				//�ָ�Ϊ��ʼֵ
	printf("\nPointers reset to original values:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);//%tdת��˵����ӡ��ַ�Ĳ�ֵ��������%d��%ld����

	//һ��ָ���ȥһ������
	printf("\nsubtracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);


	return 0;
}

/*
pointer value, dereferenced pointer, pointer address:
ptr1 = 000000E2B411F658, *ptr1 = 100, &ptr1 = 000000E2B411F688

adding an int to a pointer:
ptr1 + 4 = 000000E2B411F668, *(ptr1 + 4) = 500

values after ptr++:
ptr1 = 000000E2B411F65C, *ptr1 = 200, &ptr1 = 000000E2B411F688

values after --ptr2:
ptr2 = 000000E2B411F65C, *ptr2 = 200, &ptr2 = 000000E2B411F6A8

Pointers reset to original values:
ptr2 = 000000E2B411F660, ptr1 = 000000E2B411F658, ptr2 - ptr1 = 2

subtracting an int from a pointer:
ptr3 = 000000E2B411F668, ptr3 - 2 = 000000E2B411F660
*/
#include<stdio.h>
//数组名的地址就是多维数组中首数组的首元素所在地址
int main(void)
{
	int zippo[4][2] =
	{
		{ 2, 4 },
		{ 6, 8 },
		{ 1, 3 },
		{ 5, 7 }
	};

	printf("    zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
	printf(" zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf("*zipp0[0] = %p,    *zipp + 1 = %p\n", *zippo, *zippo + 1);
	printf("zippp[0][0] = %d\n", zippo[0][0]);
	printf("  *zippo[0] = %d\n", *zippo[0]);
	printf("    **zippo = %d\n", **zippo);
	printf("      zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));

	return 0;
}

/*
	zippo = 000000CA661DF568,    zippo + 1 = 000000CA661DF570	//*zippo==zippo[0];**zippo==*zippo[0]
 zippo[0] = 000000CA661DF568, zippo[0] + 1 = 000000CA661DF56C
*zipp0[0] = 000000CA661DF568,    *zipp + 1 = 000000CA661DF56C
zippp[0][0] = 2
  *zippo[0] = 2
	**zippo = 2
	  zippo[2][1] = 3
*(*(zippo+2) + 1) = 3
*/
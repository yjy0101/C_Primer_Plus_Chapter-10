/*
	int n = 5;
	double x;
	int* pl = &n;
	double* pd = &x;
	x = n;			//��ʽ����ת��
	pd = pl;		//����ʱ����
*/
/*
	int* pt;
	int (*pa)[3];
	int ar1[2][3];
	int **p2;		//һ��ָ��ָ���ָ��

	pt = &ar1[0][0];	//����ָ��int��ָ��
	pt = ar1[0];		//����ָ��int��ָ��
	pt = ar1;			//��Ч
	pa = ar1;			//����ָ���ں�3��int����Ԫ�������ָ��
	pa = ar2;			//��Ч
	p2 = &pt;			//both pointer-to-int*
	*p2 = ar2[0];		//����ָ��int��ָ��
	p2 = ar2;			//��Ч
*/

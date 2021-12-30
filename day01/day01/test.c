#include<stdio.h>

void A(int num, int* res)
{
	int i;
	for (i = 0;i < 10;i++)
	{
		res[i] += num;
	}
}

void B(int num, int* res)
{
	int i;
	for (i = 0;i < 10;i++)
	{
		res[i] -= num;
	}
}

void C(int num, int* res)
{
	int i;
	for (i = 0;i < 10;i++)
	{
		res[i] *= num;
	}
}

void D(int num, int* res)
{
	int i;
	for (i = 0;i < 10;i++)
	{
		res[i] /= num;
	}
}

main()
{
	int num = 2;
	int res[10] = { 0,1,2,3,4,5,6,7,8,9 };
	A(num, res);
	B(num, res);
	C(num, res);
	D(num, res);
}
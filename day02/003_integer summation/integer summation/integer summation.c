#include <stdio.h>

int main()
{
	int x, y, z;
	printf("please input x and y\n");
	scanf_s("%d%d", &x, &y);
	z = x * y;
	printf("%d * %d = %d", x, y, z);
	return 0;
}
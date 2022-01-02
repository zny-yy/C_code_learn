#include <stdio.h>

int main()
{
	float x, y, z;
	printf("please input X and Y:\n");
	scanf_s("%f%f", &x, &y);
	z = x > y ? x : y;
	printf("max(%f,%f) is %f", x, y, z);
	return 0;
}
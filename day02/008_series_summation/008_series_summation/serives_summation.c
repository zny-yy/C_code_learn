#include <stdio.h>

main()
{
	int i, j, n;
	long temp = 0, sum = 0;

	printf("please input a number to n:\n");
	scanf_s("%d", &n);
	if (n < 1)
	{
		printf("The n must no less than 1.\n");
		return;
	}
	for (i = 1; i <= n; i++)
	{
		temp = 0;
		for(j = i;j <= i; j++)
			temp += i;
		sum += temp;
	}
	printf("The sum of the sequrnce(%d) is %d\n", sum,n);
	getchar();
}
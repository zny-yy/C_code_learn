#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

main()
{
	char ch, nch;
	int count, k;

	printf("please input a string with a # in the end.\n");
	scanf_s("%c", &ch,1);
	while (ch != '#')
	{
		if (ch >= '0' && ch <= '9')
		{
			count = ch - '0' + 1;
			scanf_s("%c", &nch,1);
			for (k = 0;k < count;k++)
				printf("%c", nch);
		}
		else
			printf("%c", ch);
		printf(" ");
		scanf_s("%c", &ch,1);
	}
	printf("#\n");
}
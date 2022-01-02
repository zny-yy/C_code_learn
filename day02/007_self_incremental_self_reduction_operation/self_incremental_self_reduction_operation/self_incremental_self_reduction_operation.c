#include <stdio.h>

 main()
{
	 int a = 5, b, c, i = 10;
	 b = a++;
	 c = ++b;
	 
	 printf("a = %d, b = %d, c = %d,\n", a, b, c);
	 printf("i = %d, i++ = %d, ++i = %d,\n",i, i++, ++i);
	 printf("i = %d, i-- = %d, --i = %d,\n", i, i--, --i);
	 printf("i = %d, -i++ = %d, -i-- = %d,\n", i, -i++, -i--);
	 getchar();
 }
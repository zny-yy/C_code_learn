#include <stdio.h>
int main()
{
	char str[20];
	puts("请输入一串字符，少余20个：\n");
	gets(str);
	puts("你输入的字符为：\n");
	puts(str);
	return 0;

}
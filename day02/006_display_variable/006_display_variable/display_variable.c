//�����ͬ������ռ�ֽ���
#include <stdio.h>

void main()
{
	/*sizeof()�Ǳ����֣�������������ĳ���ͻ�ĳ�������͵��ֽ���,
	�����п��������ͱ����ֻ������
	int���ڲ�ͬ�Ļ�������ͬ�ı������е��ֽ�����һ��,
	һ����˵��TC2.0���������ֽ���Ϊ2,��VC���������ֽ���Ϊ4 
	*/
	printf("The bytes of the variables are :\n");
	printf("int: %d bytes\n", sizeof(int));

	printf("char: %d bytes\n", sizeof(char));

	printf("short : %d bytes\n", sizeof(short));

	printf("long : %d bytes\n", sizeof(long));

	printf("double : %d bytes\n", sizeof(double));

	printf("long double : %d bytes\n", sizeof(long double));

	printf("float : %d bytes\n", sizeof(float));

	getchar();
}
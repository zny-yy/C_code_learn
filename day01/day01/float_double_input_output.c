#include <stdio.h>

int main()
{
	float fa;
	double da;

	printf("please input a float number:");
	scanf_s("%f", &fa);

	printf("���ո�ʽ%%f,���Ϊ:%f\n", fa);
	printf("���ո�ʽ%%e,���Ϊ:%e\n", fa);
	printf("���ո�ʽ%%g,���Ϊ:%g\n", fa);

	printf("���ո�ʽ%%10.7f,���Ϊ:%10.7f\n", fa);
	printf("���ո�ʽ%%-10.7f,���Ϊ:%-10.7f\n", fa);


	printf("please input a double number:");
	scanf_s("%lf", &da);

	printf("���ո�ʽ%%f,���Ϊ:%f\n", da);
	printf("���ո�ʽ%%e,���Ϊ:%e\n", da);
	printf("���ո�ʽ%%g,���Ϊ:%g\n", da);

	printf("���ո�ʽ%%10.7f,���Ϊ:%10.7f\n", da);
	printf("���ո�ʽ%%-10.7f,���Ϊ:%-10.7f\n", da);

}
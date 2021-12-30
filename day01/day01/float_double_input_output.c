#include <stdio.h>

int main()
{
	float fa;
	double da;

	printf("please input a float number:");
	scanf_s("%f", &fa);

	printf("按照格式%%f,结果为:%f\n", fa);
	printf("按照格式%%e,结果为:%e\n", fa);
	printf("按照格式%%g,结果为:%g\n", fa);

	printf("按照格式%%10.7f,结果为:%10.7f\n", fa);
	printf("按照格式%%-10.7f,结果为:%-10.7f\n", fa);


	printf("please input a double number:");
	scanf_s("%lf", &da);

	printf("按照格式%%f,结果为:%f\n", da);
	printf("按照格式%%e,结果为:%e\n", da);
	printf("按照格式%%g,结果为:%g\n", da);

	printf("按照格式%%10.7f,结果为:%10.7f\n", da);
	printf("按照格式%%-10.7f,结果为:%-10.7f\n", da);

}
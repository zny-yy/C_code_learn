#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
	int count;
	int number;
	int guess;
	char yes = 'Y';
	printf("\nNow let us play the game.\n Guess the number:");
	while (toupper(yes) == 'y')
	{
		count = 0;
		srand(time(0));
		number = rand() % 100 + 1;
		do {
			do
			{
				printf("\nInput an integer number(1-100):");
				scanf_s("%d", &guess);
			} while (!(guess >= 1 && guess <= 100));
			if (guess < number)
				printf("\n Your answer is Low,try again.");
			if (guess > number)
				printf("\n Your answer is Hight, try again.");
			count++;
			if (count == 15)
			{
				printf("\n This is the 15 time£¡Think it hard next!");
				exit(0);
			}
			}while (!(guess == number));
			if (count < 7)
			{
				printf("\n You have got it in %d times.\n", count);
				printf("\nCongretulations!");
			}
			else
			{
				printf("\n You have got it in %d times.\n", count);
				printf("\nI bet you can do it better");
			}
			printf("\n NEXT?(Y/N):");
			scanf_s("%c", &yes);
	}

	return 0;
}
#include <stdio.h>

/**
* main - Description pour main
* Whose idea was it to create Betty? Next on the third exercise.
* You will have a good story to tell. So, why Betty is useless?
* Maybe because there is nothing to learn with her?
* Oh! Yes, you are right, for take the good habit!
* But now, we lost our time because we are affraid of you... Betty
* What am i suppose to think? Good habit does not depend on you.
* We all know that, you know... So, what am i suppose to think?
* I think a simple thing. It's just totaly bullshit and lost of time.
* Don't ask why... And think by yourself... isn't it?
*
* Have you think hard? Perfect. Because seriously, Betty is lost of time.
* I explain seriously.
* I understand why we need space between return and his value.
* However, i cannot understand why i can't between printf and ().
* It's just an example.
*
* It's just like... You see a white wall and you know his white.
* Nobody can't tell you: This wall is black! But Betty... Yes. :'(
* So you are right, you know you are right... But you are wrong.
*
* WHY?
*
* If it's for take good habit, there is more good habit.
* And it depend for who. So it's not for that. So why?
*
* Return: Always 0 (succes)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%i", i);

		if (i != 100)
			printf(" ");
		if (i == 100)
			printf("\n");
	}
	return (0);
}

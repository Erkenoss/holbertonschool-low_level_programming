#include "main.h"

/**
* print_triangle - Description pour main
* Whose idea was it to create Betty? Next on the third exercise.
* @size: You will have a good story to tell. So, why Betty is useless?
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
* We can think, it's for slow us down. But... Seriously, i guess not.
* We can think, it's for make exercise more difficult...
* With not really difficulty... For learn to read the error messages?
* Maybe.
*
* In my opinion, it's for one of this two things:
*
* More you force people to do something, more you create frustration
* So lost concentration, hunger etc... How the people will be after
* some betty test?
*
* Or it's for force the people to have this thinking. Because the
* creator have in his head one vision and everyone need to have
* this vision of the code.
*
* Return: Always 0 (succes)
*/



void print_triangle(int size)
{
	int hauteur, largeur;
	int spaceCount, diezeCount;

	if (size <= 0)

		_putchar('\n');

	for (hauteur = 0; hauteur < size; hauteur++)
	{
		spaceCount = (size - hauteur) - 1;
		diezeCount = (size - spaceCount);

		for (largeur = 0; largeur < spaceCount; largeur++)
			_putchar(' ');

		for (largeur = 0; largeur < diezeCount; largeur++)
			_putchar('#');

		_putchar('\n');
	}
}

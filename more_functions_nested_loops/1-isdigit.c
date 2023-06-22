#include "main.h"

/**
* _isdigit - Description pour main
* @c: Whose idea was it to create Betty? Next on the third exercise.
* You have a good story to tell.
*
* Return: Always 0 (succes)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

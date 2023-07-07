Add 0-reset_to_98.c: objective, change the value of a pointer name n to 98. We use double pointer. So, *n = value change to 98 with **p. We init a double pointer "int **p". We attribute the "value" "&n" (because it's a pointer) and tell "**p = 98"

Add 1-swap.c: Objective, exchange value of two variable without lost a variable value. We do a swap. With "int c" as temp value. So we have, c = *a, a* = *b and *b = c.

Add 2-strlen.c: objective, calcul the lenght of a string. We init "int i = 0". A while loop and i++. For finish we return i.

Add 3-puts.c: Objective, print the string point by "*str". We init "int i", we check the lenght in a while loop and we print "str[i]".

Add 4-print_rev.c: Objective, print a string reverse. It's the same thing. We do a while loops for the lenght and we do the same in reverse with print in the same time. 

Add 5-rev_string.c: Objective, display a variable containt of a string give in first in reverse. We do the same thing with strlen. And we do a swap during a for loop index on a second variable name ver. We go to rev = len - 1. We increment ver and decremente rev. We have declare a char temp variable for the swap. The two cursor reunite together in a same same and the swap is good.

Add 6-puts2.c: Objective, print 1/2 number. So, lenght as usual and print if the % is even.

Add 7-puts_half.c: Objective, print only the half of a string. Same with lenght but, if the %2 of lenght == 1 we do a for and print str[half]. Thus if the lenght is odd we do the same thing with len/2 + 1.

Add 8-print_array.c: Objective, print all the element in an array of integer. We have n nbr of element in the array. *a point element by element in the array with the variable i. And we print a[i] if i est different de n - 1.

Add 9-strcpy.c: Objective, copy the source char in the destination char so... We do lenght. And during calcul the lenght, we tell destination = source. 

Add 100-atoi.c: Objective, transform or translate, maybe change a string to an int. So, we take all the '-' and we multiply our variable number by -1 for every '-' before the first digit. Second, we do a while during which we take only the number, after, the loop stop. We multiply result by 10 and we add the number on the ASCII table - '0'. We multiply the result by number.


Add 0-strcat.c: Objective, concate two string in one. We do the lenght of the source string. And we do lenght of the second string, destination. We add the two lenght. uy

Add 1-strncat.c: Objective, same as previous but only the number n of bytes given.

Add 2-strncpy.c: Objective, as previous with strncat. It's not concatenate but a copy.

Add 3-strcmp.c: Objective, we compare two strings. And return the difference on the ASCII table between the two of them when the first different occurence appears. 

Add 4-rev_array.c: Objective, display an array in reverse. We do lenght of an INT array. And during the loop we do a swap. 

Add 5-string_toupper.c: Objective, change lowercase in uppercase. We do length and we change the letters 'a'..'z' to uppercase. 

Add 6-cap_string.c: Objective... Don't ask me what is this objective. 

Add 7-leet.c: Objective, change certains characters to another.


Add 0-memset.c: Objective, add in a chain of characters, n bytes of a second chain. 

Add 1-memcpy.c: Objective, same as previous but it's a copy. 

Add 2-strchr.c: Objective, return the rest of a string when the second string is equal to the first one. 

Add 3-strspn.c: Objective, count the same characters in two strings and return byt, the number of same characters in bytes. 

Add 4-strpbrk.c: Objective, locate the first occurence same in two strings and return the rest of a chain. 

Add 5-strstr.c: Objective, find the first set of characters in a chain, compare to the second and return the same set of character if is the same in the both. 

Add 7-print_chessboard.c: Objective, print a chessboard. 

Add 8-print_diagsums.c: Objective, add number in diagonal in an array of int. 

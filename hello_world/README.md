Add 0-preprocessor with gcc $CFILE -E -o c. Launch the compilation and stop it to a preprocessor when the compiler import the library, to the file $CFILE. And the output -o is save in the file name c.

Add 1-compiler with gcc -c $FILE. Same as before but stop to compiling and save $CFILE in a file.o. But no need to name it because the compiler automacaly save this file with this extention when you stop it here. 

Add 2-assembler with gcc -s $CFILE. Same as before but stop to assembling and save in a file.s. 

Add 3-name with gcc $CFILE -o cisfun. Same as before but run all the compiler and save the result, the output in the file name cisfun. it's an executable, so, cisfun is cisfun.exe. 

Add 4-puts.c. Print this "Programming is like building a multilingual puzzle.

Add 5-printf.c. Print this with proper grammar, but the outcome is a piece of art,\n (don't forget the line return)

Add 6-size.c. Print the size in bit for char, int long int, long long int and a float. 


Additionnal tasks:

Add 100-intel with gcc -S -masm=intel $CFILE. Stop the compilation to assembly and generate it in intel syntax.

Add 101-quote.c. Without use printf and puts, print this and that piece of art is useful\" - Dora Korpar, 2015-10-19\n in the standard error. You need to count the number of character and return 1 for.  

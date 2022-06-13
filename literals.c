#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/*
INTEGER CONSTANTS
FLOATING CONSTANT
STRING 
CHARACTERS
*/

/*
10 = a
11 =b

15 =F
*/
/*
big endian
little endian

    2^3 + 2^2 + 2^1 + 2^0
1 =  0     0     0     1

[    ] A + 3
[    ] A + 2
[    ] A + 1
[  1000 ] A little endian

*/
int main () 
{
int a = 012;

printf("[%-4X] \n", a);

char * string = "hello world";
printf("%s\n", string);

float f = 3.14;
float scientific = 314E-2;
//c99
float hex = 0x1.5p2;

printf("[%6.2f], %e, %g %.2a\n",f,f,f, f);


char c = 'c';
//\v, \b, \f, \n, \a;
printf("this is a \v \x42 \101 %c character \n", c);

//printf("%d BITS", CHAR_BIT*sizeof(int));
    return  EXIT_SUCCESS;
}
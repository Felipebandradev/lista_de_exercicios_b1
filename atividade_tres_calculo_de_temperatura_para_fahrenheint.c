/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float temperatura, fahrenheint;

printf("Digite a temperatura para des combrir os fahrenheint \n");

printf("Temperatura:");
scanf("%f",&temperatura);

fahrenheint = temperatura*(9.0/5.0) + 32;

printf("%.2f F ", fahrenheint);

}

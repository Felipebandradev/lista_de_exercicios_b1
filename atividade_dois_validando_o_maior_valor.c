/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int valor1, valor2, valor3;

printf("Digite o primeiro valor :");
scanf("%i", &valor1);
printf("Digite o segundo valor:");
scanf("%i", &valor2);
printf("Digite o terceiro valor:");
scanf("%i", &valor3);


if ((valor1 > valor2) && (valor1 > valor3)){
    
        printf("O primeiro valor é o maior entre os três digitados");
        
    
} else if ( (valor2 > valor1) && (valor2 > valor3)){
    printf("O segundo valor é o maior entre os três digitados");
    
} else{
    printf("O terceiro valor é o maior entre os três digitados");

}
    
}

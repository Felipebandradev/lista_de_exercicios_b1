/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int lado1,lado2,lado3;
  
  printf("Descubra o tipo do triângulo \n");
  
  printf("Digite o valor do primeiro lado:");
  scanf("%i", &lado1);
  printf("Digite o valor do segundo lado:");
  scanf("%i", &lado2);
  
  printf("Digite o valor do terceiro lado:");
  scanf("%i", &lado3);
  
  if((lado1 == lado2 ) && (lado1 == lado3) && (lado2 == lado3)){
      printf("seu triângulo é EQUILÁTERO");
  } else if( (lado1 != lado2 ) && (lado1 != lado3) && (lado2 != lado3) ){
    printf("seu triângulo é ESCALENO");
  } else{
      printf("seu triângulo é ISÓSCELES");
  }
  
  
}

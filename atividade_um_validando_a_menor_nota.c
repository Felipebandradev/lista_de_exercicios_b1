/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int valor1, valor2, valor3;

printf("Digite a primeira nota:");
scanf("%i", &valor1);
printf("Digite a segunda nota:");
scanf("%i", &valor2);
printf("Digite a terceira nota:");
scanf("%i", &valor3);


if ((valor1 < valor2) && (valor1 < valor3)){
    
        printf("A primeira nota é a menor");
        
    
} else if ( (valor2 < valor1) && (valor2 < valor3)){
    printf("A segunda nota é a menor");
    
} else{
    printf("A terceira nota é a menor");

}



}

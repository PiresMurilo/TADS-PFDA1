#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h> // biblioteca de boolear, ou seja, valor de v ou f  

int main ()
{ 
    //Definindo vari�veis
    int a;
    float b;
    char c;
    bool d;
    
    //Passando valores
    a = 5;
    b = 8.7;
    c = 'x';
    d = true; // true = 1(presen�a) e false = 0(aus�ncia)
    
    //Imprimir na tela
    printf("O valor de a = %i", a);
    printf("\nO valor de b = %0.2f", b);
    printf("\nO valor de c = %c", c);
    printf("\nO valor de d = %i\n", d);
    
    //Lendo valores e Reimprimindo valores
    scanf("%i", &a);
    printf("\nO valor de a = %i", a);
    
    scanf("%f", &b);
    printf("\nO valor de b = %0.2f", b);
    
    scanf(" %c", &c); // espa�o antes do texto POR PECULIARIDADE
    printf("\nO valor de c = %c", c);
    
    scanf("%i", &d);
    printf("\nO valor de d = %i\n", d);	
    
    
    
   system("pause");
   	
	
}

#include <stdio.h> 
#include <stdlib.h>  

int main () 
{
    //variáveis
    int a = 5, b = 3;
    
    //resto
    printf("O resto da divisao de %i e %i = %i", a, b, a % b);
    
    //valor absoluto
    printf("\nO absoluto de -8 = %i\n", abs(-8)); /** abs sempre vai transformar em valor positivo,
	dentro dos parenteses poderia estar uma conta **/
 
    system("pause");
}

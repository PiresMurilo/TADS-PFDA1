#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char letra = 'x';
	
	if (letra == 'x') {
		printf("A letra é x.\n");
	}
	
	printf("O código da letra x é %i \n", letra); /* printf utilizado para descobrir o código ASCII de
	uma determinada letra, nesse caso a letra x. Como o código é um numero, fora usado o %i para mostrar o INTEIRO */
	
	if (letra == 120) {
		printf("A letra é x \n");
	} 
	
	
	system("pause");
}

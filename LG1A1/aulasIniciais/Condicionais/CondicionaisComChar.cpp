#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	char letra = 'x';
	
	if (letra == 'x') {
		printf("A letra � x.\n");
	}
	
	printf("O c�digo da letra x � %i \n", letra); /* printf utilizado para descobrir o c�digo ASCII de
	uma determinada letra, nesse caso a letra x. Como o c�digo � um numero, fora usado o %i para mostrar o INTEIRO */
	
	if (letra == 120) {
		printf("A letra � x \n");
	} 
	
	
	system("pause");
}

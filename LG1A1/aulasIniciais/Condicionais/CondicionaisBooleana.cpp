#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	bool a = true, b = false;
	
	//Se A for verdadeiro
	if (a) {
		printf("A é verdadeiro\n");
	}
	
	//Comparando o B
	if (b) // B ASSUME IDENTIDADE VERDADEIRA 
	{
		printf("B é verdadeiro\n");
	} else {
		printf("B é falso\n");
	}
	
	//Comparando uma falsidade
	if (!b) // B ASSUME VALOR FALSO POR ESTAR ANTECEDIDO DE !
	{
		printf("B é falso\n");
	}
	
	system("pause");
}

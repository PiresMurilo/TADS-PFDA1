#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a = 5, opcao = 1; //defini��o/atribui��o de vari�vel por isso UM =
	float b = 2.5;
	char c = 'x';
	
	//CONDICIONAL SIMPLES
	if (a == 5) //como se trata de uma compara��o s�o DOIS =
	{ printf("A variavel a eh igual a 5"); 
	} /*como a compara��o � verdadeira,
	a leitura � feita, no caso de a variavel a assumir um valor diferente de 5 o programa n�o
	rodaria */
	if (b == 2.5) { printf("\nA variavel b eh igual a 2.5\n");
	}
	if (c == 'x') { printf("A variavel c eh igual a letra x\n");
	}
	
	
	//CONDICIONAL COMPOSTA
	if (a % 2 == 1) { printf("A variavel eh impar\n");
	} else { printf("\nA variavel eh par\n"); // else funciona como um SE N�O...
	}
	
	if (opcao == 1) {
		printf("A opcao eh igual a 1\n");
		} else if (opcao == 2) {
			printf("\nA opcao eh igual a 2\n");
		} else { printf("\nA opcao nao eh nem 1 e nem 2\n");
		} /*nesse BLOCO DE IF tem-se a cria��o de uma condicional composta onde DUAS CONDI��ES
		s�o postas, se o programa verificar que a primeira � falsa, rodar� a segunda caso
		esta seja verdadeira e caso nenhuma das duas sejam verdadeiras, a mensagem impressa na tela
		ser� a presente no ELSE */
	
	system ("pause");
}

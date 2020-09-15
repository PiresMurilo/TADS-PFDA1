//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero, dobro, quadrado;

    printf("Digite um número: ");
    scanf("%i", &numero);

    dobro = numero * 2;
    quadrado = numero * numero;

    printf("O número %i tem como dobro: %i e elevado ao quadrado: %i", numero, dobro, quadrado);

    return 0;
}
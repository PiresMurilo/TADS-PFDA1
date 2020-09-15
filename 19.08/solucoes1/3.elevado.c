//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int base, expoente, resultado;

    printf("Digite um número: ");
    scanf("%i", &base);

    printf("Digite outro número: ");
    scanf("%i", &expoente);

    resultado = pow(base, expoente);
    printf("Ao elevar a base %i ao expoente %i, obtem-se como resultado: %i", base, expoente, resultado);

    return 0;
}
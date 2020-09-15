//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float altura, pi, pii;
    char sexo;

    printf("Digite M para sexo masculino ou F para feminino: ");
    scanf("%c", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    pi = 72.7*altura-58;
    pii = 62.1*altura-44.7;

    if (sexo == 'M' || sexo == 'm'){
        printf("Seu peso ideal é: %.2f\n", pi);
    }
    else if (sexo == 'F' || sexo == 'f'){
        printf("Seu peso ideal é: %.2f\n", pii);
    }
    else{
        printf("Por favor, digite uma opçao válida!\n");
    }

return 0;
}
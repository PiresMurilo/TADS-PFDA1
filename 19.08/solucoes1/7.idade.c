//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int anoN, anoA, idadeA, idadeM, idadeD, idadeS;

    printf("Informe o ano de seu nascimento: ");
    scanf("%i", &anoN);

    printf("Informe o ano atual: ");
    scanf("%i", &anoA);

    idadeA = anoA - anoN;
    idadeM = idadeA*12;
    idadeD = idadeA*365;
    idadeS = idadeA*52;

    printf("a. Sua idade é: %i anos\n", idadeA);
    printf("b. Sua idade em meses é: %i meses\n", idadeM);
    printf("c. Sua idade em dias é aproximadamente: %i dias\n", idadeD);
    printf("d. Sua idade em semanas é aproximadamente: %i semanas\n", idadeS);

    return 0;
}
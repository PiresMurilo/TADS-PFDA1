//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float celsius, fah;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fah = (celsius*1.8)+32;
    printf("A temperatura equivale a %2.f em Fahrenheit", fah);
    
    return 0;
}
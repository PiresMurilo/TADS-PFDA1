//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, salarioLiq, previdencia, ir;

    printf("Informe o salário bruto: ");
    scanf("%f", &salarioBruto);
    
    previdencia = salarioBruto*0.085;
    salarioBruto = salarioBruto - previdencia;
    ir = salarioBruto*0.275;
    salarioLiq = salarioBruto - ir;

    printf("================================\n");
    printf("Salário Líquido: R$ %.2f\n", salarioLiq);
    printf("IR: R$ %.2f\n", ir);
    printf("Previdência: R$ %.2f\n", previdencia);
    printf("================================\n");

    return 0;
}
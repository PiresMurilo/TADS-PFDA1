/* ALGORITMO:
1. Receber do usuário o salário atual e armazená-lo na variável "salario".
2. Calcular o valor do reajuste de 25% de acordo com o salário e armazená-lo na variável "reajuste".
3. Calcular o novo valor do salário (salário antigo + reajuste) e armazená-lo na variável "salariop".
4. Imprimir a variável "salariop" para o usuário.
#include <conio.h> */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, salariop, reajuste;

    printf("Informe o salário atual: R$ ");
    scanf("%f", &salario);

    reajuste = salario*0.25;
    salariop = salario + reajuste;

    printf("============================================\n");
    printf("Salário atual: R$ %.2f\n", salario);
    printf("--------------------------------------------\n");
    printf("Salário após reajuste: R$ %.2f\n", salariop);
    printf("============================================\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char d1, d2, d3, d4;
    int opcao;
    
    printf("Digite a senha: ");
    d1 = getch();
    printf("*");
    d2 = getch();
    printf("*");
    d3 = getch();
    printf("*");
    d4 = getch();
    printf("*");

    if(d1 == '1', d2 == '3',d3 == '1',d4 == '0'){
        printf("=============\n");
        printf("a = saldo\n");
        printf("b = depósito\n");
        printf("c = pagamentos\n");
        printf("d = transferências\n");
        printf("e = sair\n");
        printf("=============\n");
        printf("Selecione a opcão desejada: ");
        scanf("%c", &opcao);

        switch(opcao){
            case 'a': 
                printf("Operação: saldo\n");
                break;
            case 'b':
                printf("Operação: depósito\n");
                break;
            case 'c':
                printf("Operação: pagamentos\n");
                break;
            case 'd': 
                printf("Operação: tranferências\n");
                break;
            case 'e':
                printf("Encerrando operações\n");
                exit(0);
                break;
            default: printf("Opção inválida!\n");
        }
    }
    else {
        printf("Senha incorreta!");
    }
return 0;
}
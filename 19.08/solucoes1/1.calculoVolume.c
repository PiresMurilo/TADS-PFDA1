/* ALGORITMO:
1. Receber do usuário o valor do raio e armazená-lo na variável "raio".
2. Receber do usuário o valor da altura e armazená-lo na variável "altura".
3. Preencher a fórmula com os dados recebidos e armazenar o resultado na variável "volume".
4. Imprimir para o usuário a variável "volume".
#include <conio.h> */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float volume
    int raio, altura;
    
    printf("Digite o valor do raio: ");
    scanf("%i", &raio);

    printf("Digite o valor da altura: ");
    scanf("%i", &altura);

    volume = 3.14159 * (raio*raio) * altura;
    printf("O volume da lata é de: %2.f \n", volume);

    return 0;
}
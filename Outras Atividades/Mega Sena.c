//Matheus aguiar do Ouro (202410515)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));

    unsigned int valor[6];
    unsigned int numeros_armazenados[6];
    int i, j;
    bool iguais;

    printf("Insira 6 números de 1 a 60:\n");
    for(i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &valor[i]);
        if(valor[i] < 1 || valor[i] > 60) {
            printf("Número inválido, insira um número de 1 a 60.\n");
            return 1;
        }
    }

    do {
        iguais = true; 
        printf("Números sorteados: ");
        for(i = 0; i < 6; i++) {
            numeros_armazenados[i] = rand() % 60 + 1;
            printf("%d ", numeros_armazenados[i]);
        }
        printf("\n");

        
        for(i = 0; i < 6; i++) {
            if(numeros_armazenados[i] != valor[i]) {
                iguais = false;
                break;
            }
        }

    } while(!iguais); 
    printf("Você acertou todos os números!\n");

    return 0;
}

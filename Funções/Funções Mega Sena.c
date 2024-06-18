#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void SelecaoNum(unsigned int valor[], int tamanho) {
    printf("Insira 6 números de 1 a 60:\n");
    for(int i = 0; i < tamanho; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &valor[i]);
            if(valor[i] < 1 || valor[i] > 60) {
                printf("Número inválido, insira um número de 1 a 60.\n");
            }
        } while(valor[i] < 1 || valor[i] > 60);
    }
}

void numeros_aleatorios(unsigned int numeros[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        numeros[i] = rand() % 60 + 1;
    }
}

void mostrar_numeros(unsigned int numeros[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

bool compararcao(unsigned int numeros1[], unsigned int numeros2[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(numeros1[i] != numeros2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(NULL));

    unsigned int valor[6];
    unsigned int numeros_armazenados[6];
    const int tamanho = 6;
    bool iguais;

    SelecaoNum(valor, tamanho);

    do {
        iguais = true; 

        printf("Números sorteados: ");
        numeros_aleatorios(numeros_armazenados, tamanho);
        mostrar_numeros(numeros_armazenados, tamanho);

        iguais = compararcao(numeros_armazenados, valor, tamanho);

    } while(!iguais); 

    printf("Você acertou todos os números!\n");

    return 0;
}

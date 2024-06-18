//Nome: Matheus Aguiar do Ouro
//Matrícula: 202410515


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6
#define MIN_N 1
#define MAX_N 60

int validade(int numeros[]) {
    for (int i = 0; i < NUM; i++) {
        if (numeros[i] < MIN_N || numeros[i] > MAX_N) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numerosE[NUM];
    srand(time(NULL));

    printf("Insira 6 números entre 1-60\n");
    scanf("%i %i %i %i %i %i", &numerosE[0], &numerosE[1], &numerosE[2],
          &numerosE[3], &numerosE[4], &numerosE[5]);

    if (!validade(numerosE)) {
        printf("Os números inseridos não são válidos. Eles devem estar entre 1 e 60.\n");
        return 1;
    }

    unsigned long int tentativas = 0;

    while (1) {
        tentativas++;
        printf("\nTentativa %li:\n", tentativas);

        int acertos = 0;

        
        for (int i = 0; i < NUM; i++) {
            int numeroSorteado = rand() % (MAX_N - MIN_N + 1) + MIN_N;
            printf("Número sorteado: %d\n", numeroSorteado);

            
            for (int j = 0; j < NUM; j++) {
                if (numeroSorteado == numerosE[j]) {
                    acertos++;
                    break;
                }
            }
        }

        if (acertos == NUM) {
            printf("\nParabéns! Você acertou todos os números.\n");
            break; 
        }
    }

    printf("Total de tentativas: %li\n", tentativas);

    return 0;
}

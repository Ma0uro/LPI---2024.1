#include <stdio.h>

int main() {
    unsigned long int valor;
    const int menor = -2147483648;  
    const int maior = 2147483647;   

    printf("Insira um número inteiro longo sem sinal:");
    scanf("%lu", &valor);

    printf("Número: %lu\n", valor);
    (valor > maior) ? printf("é maior que um int: %i\n", valor) : printf("este valor pertence ao intervalo dos int: %i\n", valor);

    return 0;
}

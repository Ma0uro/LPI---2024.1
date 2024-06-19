#include <stdio.h>

int main () {

const int menor = -32768;
const int maior = 32767;
int valor;

printf("Insira um número:");
scanf("%d", &valor);


printf("Número: %d\n", valor);  
(valor < menor || valor > maior) ? printf("é maior que um short int: %hd", valor) 
: printf("este valor pertence ao intervalo dos short int: %hd", valor);


return 0;
}
#include <stdio.h>

int main() {

  int n, resultado;

  printf("Digite um número: "); 
  scanf("%d", &n);	


  resultado = n * (n + 1) / 2;
  
  (n < 0) ? printf("O Número é negativo") 
    : printf("Soma de todos os números inteiros de zero até o número fornecido: %d", resultado);

  return 0;
}

// algoritmo da soma:o, calcula a soma utilizando a fórmula da soma dos primeiros n números inteiros.
// se o número for negativo o programa é encerrado.

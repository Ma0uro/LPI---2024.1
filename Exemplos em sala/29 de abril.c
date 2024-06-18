#include <stdio.h>

int soma(int n0fCycles, int step) {

int soma = 0;
  for (int i = 0; i < n0fCycles; i += step) { 
    soma += i;
  printf("%i %d\n", i, soma);
  }  
    return soma;
  }   
  
int main() {
  int valor = 0;
  
  valor = soma(100, 3);
  
  printf("Valor %d\n", valor);
   
  
  return 0;
}
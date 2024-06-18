#include <stdio.h>
#include <time.h>

int loop( int nOfLoop );

int main() {
  printf("Teste 1\n");

  int res = loop(1);

  printf("Soma %d\n", res);
  return 0;
}
int loop (int nOfLoop){
  unsigned int soma = 0;
   
 for ( int i = 0; i < nOfLoop; i++) { 
  soma += i;
 }
  return soma;  
}

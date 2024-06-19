#include <stdio.h>

int main() {
  
  int N1, N2, N3;

  printf("Insira dois números inteiros: \n");
  scanf("%d", &N1);
  scanf("%d", &N2);

  N3 = N1 + N2;

  printf("A soma dos dois números em formato hexadecimanl é: %x\n", N3);

  N3 = N1 * N2;
  
  printf("O produto entre os dois números em formato octal é: %o\n", N3);
  
  N3 = N1 - N2;
  N3 = (N3 < 0 ) ? -N3 : N3;
  printf("Valor Absoluto: %d\n", N3);

 if (N2 == 0) {
   printf("Não é possível dividir por zero");
 } else {
   N3 = N1 / N2;
   printf("O quociente  entre a divisão dos números é: %d\n", N3);

  N3 = N1 % N2;
  (N3 == 0) ? printf("A divisão é exata, resto: %d\n", N3)
   : printf("A divisão não é exata, resto da divisão: %d\n", N3);
 }

  
    return 0;
}
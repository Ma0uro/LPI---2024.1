#include <stdio.h>

int main() {
  
int cha;
  
  printf("Insira um número inteiro positivo: \n");
  scanf("%d", &cha); 

  if (cha < 0) {
  cha = cha * (-1);
  }

  
  (cha < 32) ? cha = 32, printf("%d %o %x %c", cha, cha, cha, cha)
  : printf("\n");


  (cha > 127) ? cha %= 95: printf("\n");
  
  printf("%d %o %x %c", cha, cha, cha, cha);
    

  return 0;
}
#include <stdio.h>

int main(void) {
 int D, R1 = 0, R2 = 0;


  printf("Selecione a resolução desejada para o jogo torre de hanoi: 1 para 3 discos e 2 para 4 discos \n");
  scanf("%i", &D);


  if(D == 1) {
  printf("Passo a passo para resolução do jogo Torre de Hanoi com 3 discos com o mínimo de movimento. \n");
  printf("Mova o disco 1 para a haste 3.\n"); //movimento 1
  printf("Mova o disco 2 para a haste 2.\n"); //movimento 2
  printf("Mova o disco 1 para a haste 2.\n"); //movimento 3
  printf("Mova o disco 3 para a haste 3.\n"); //movimento 4
  printf("Mova o disco 1 para a haste 1.\n"); //movimento 5
  printf("Mova o disco 2 para a haste 3.\n"); //movimento 6
  printf("Mova o disco 1 para a haste 3.\n\n"); //movimento 7
  }
  else if (D == 2) { 
    printf("Passo a passo para resolução do jogo Torre de Hanoi com 4 discos com o mínimo de movimentos. \n");
    printf("Mova o disco 1 para a haste 2.\n");
    printf("Mova o disco 2 para a haste 3.\n");
    printf("Mova o disco 1 para a haste 3.\n");
    printf("Mova o disco 3 para a haste 2.\n");
    printf("Mova o disco 1 para a haste 1.\n");
    printf("Mova o disco 2 para a haste 2.\n");
    printf("Mova o disco 1 para a haste 2.\n");
    printf("Mova o disco 4 para a haste 3.\n");
    printf("Mova o disco 1 para a haste 3.\n");
    printf("Mova o disco 2 para a haste 1.\n");
    printf("Mova o disco 1 para a haste 1.\n");
    printf("Mova o disco 3 para a haste 3.\n");
    printf("Mova o disco 1 para a haste 2.\n");
    printf("Mova o disco 2 para a haste 3.\n");
    printf("Mova o disco 1 para a haste 3.\n\n");
  } else {
    printf("Opção inválida");
  }
  
  
  
  
  
 
  return 0;
}

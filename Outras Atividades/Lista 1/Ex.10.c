#include <stdio.h>
#include <math.h>

int main() {

int lado, diagonal, perimetro, area;

  printf("Insira o valor do lado do quadrado: ");
  scanf("%d", &lado);

  diagonal = lado * sqrt(2);
  perimetro = lado + lado + lado + lado;
  area = lado * lado;
  
  printf("Diagonal: %d\nPerimetro: %d\nArea: %d", diagonal, perimetro, area);
  
  return 0;
}
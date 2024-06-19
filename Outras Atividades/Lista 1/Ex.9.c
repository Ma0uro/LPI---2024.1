#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    int lado; // Variável para representar o lado do ponto


    printf("Digite o valor de x: ");
    scanf("%f", &a);
    printf("Digite o valor de y: ");
    scanf("%f", &b);

  
    lado = (a < 0) ? -1 : (a > 0) ? 1 : 0;

   
    printf("O ponto (%.2f, %.2f) está localizado %s da curva.\n",
           a, b,
           (lado == -1) ? "à esquerda" : (lado == 1) ? "à direita" : "na curva");

   
    c = sqrt(a*a + b*b);
    printf("A distância euclidiana do ponto (%.2f, %.2f) à origem é %.2f.\n", a, b, c);

   
    c = a * b;
    printf("O produto entre x e y é %.2e.\n", c);

    return 0;
}

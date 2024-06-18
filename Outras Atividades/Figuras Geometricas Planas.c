//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515


#include <stdio.h>
#include <math.h>


int main() {
float base, basemn, altura, area, perimetro, raio, lado, diagonal, cx, cy, diagonalmn; 
int figura;  

   do {
  printf("Escolha a figura geométrica plana que deseja calcular: \n");
  printf(" 1 - Retângulo\n 2 - Círculo\n 3 - Triângulo\n 4 - Trapézio\n 5 - Quadrado\n 6 - Losango\n");
  scanf("%i", &figura);
  
  switch(figura) {
    case 1: 
    printf("Insira a base e altura do rentângulo: \n");
    scanf("%f %f", &base, &altura);
      
    area = base * altura;
    perimetro = 2 * (base + altura);
    cx = base / 2.0;
    cy = altura / 2.0;
    
    printf("A área do retângulo é: %.2fcm²\n", area);
    printf("O perímetro do retângulo é: %.2fcm\n", perimetro);
    printf("O centro de gravidade do retângulo é: (%.2f, %.2f)\n", cx, cy);  
    printf(" +--------------+ \n");
    printf(" |              | \n");
    printf(" |              | %.2fcm \n", altura); 
    printf(" |              | \n"); 
    printf(" +--------------+ \n");
    printf("      %.2fcm       \n", base); 
      break;

    case 2:
    printf("Insira o raio do círculo: \n");
    scanf("%f", &raio);

    area = M_PI * (raio * raio);
    perimetro = 2 * M_PI  * raio;
    cx = 0.0;
    cy = 0.0;  

    printf("A área do círculo é: %.2fcm²\n", area);
    printf("O perímetro do círculo é: %.2fcm\n", perimetro);
    printf("O centróide do círculo é: (%.0f,%.0f)\n", cx, cy);
    break;

    case 3:

    printf("Insira a base e altura do triângulo: \n");
    scanf("%f %f", &base, &altura);
    printf("Insira os lados do triângulo: \n");
    scanf("%f %f %f", &lado, &lado, &lado);  

    area = (base * altura)/2;
    perimetro = 3 * lado;  
    cx = base / 3.0;
    cy = altura / 3.0;
      
    printf("A área do triângulo é: %.2fcm²\n", area);
    printf("O perímetro do triângulo é: %.2fcm\n", perimetro);
    printf("O centroide do triângulo é: (%.2f, %.2f)\n", cx, cy);
    break;

    case 4:

    printf("Insira os lados do trapézio, a base maior, a base menor e a altura");
    scanf("%f %f %f %f %f", &lado, &lado, &base, &basemn, &altura);

    area = ((base + basemn) * altura)/2;
    perimetro = lado + lado + basemn + base;
    
    printf("A área do trapézio é: %.2fcm²\n", area);
    printf("O perímetro do trapézio é: %.2fcm\n", perimetro);
    break;

    case 5:
    
    printf("Insira o lado do quadrado: \n");
    scanf("%f", &lado);

    area = (lado * lado);
    perimetro = 4 * lado;
    cx = lado / 2.0;
    cy = lado / 2.0;
      
    printf("A aréa do quadrado é: %.2fcm²\n", area);
    printf("O perímetro do quadrado é: %.2fcm\n", perimetro);
    printf("O centroide do quadrado é: (%.2f , %.2f )\n", cx, cy);
    break;
    
    case 6:

    printf("Insira os lados do losango, a diagonal maior e a diagonal menor e os lados: \n");
    scanf("%f %f %f", &diagonal, &diagonalmn, &lado);
      
    area = (diagonal * diagonalmn) /2;
    perimetro = 4 * lado;

    printf("A aréa do losango é: %.2fcm²\n", area);
    printf("O perímetro do losango é: %.2fcm\n", perimetro);
    break;
    
    default:
    printf("Selecione uma opção válida, tente novamente com números entre 1-6\n");
  } } while(figura < 1 || figura > 6);   

    
  return 0;
}
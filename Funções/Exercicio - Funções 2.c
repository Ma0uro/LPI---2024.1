//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515

#include <stdio.h>

void celsius() {
    float F, C;
    
    printf("Escolha a temperatura em Farenheit para transformar em Celsius:");
    scanf("%f", &F);
    
    C = 5 * (F - 32) / 9;

    printf("%.1f°F pra Celsius = %.1f°C  ", F, C);
}

void farenheit() {
    float C, F;

    printf("Escolha a temperatura em Celsius para transformar em Farenheit:");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("%.1f°C para Farenheit = %.1f°F ", C, F);
}

int main () {

char escolha;

    printf("Escolha o tipo de temperatura:\n C para transformar Celsius em Farenheit \n F para transformar Farenheit em Celsius \n");
    scanf(" %c", &escolha);

while(1) {
    switch (escolha) {
    
    case 'C':
    case 'c':
    farenheit();
    return 0;
    
    case 'F':
    case 'f':
    celsius();
    return 0;
    
    default:
    printf("Opção invalida! Tente novamente: \n");
    scanf(" %c", &escolha);
    }
}

return 0;
}

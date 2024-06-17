//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515

#include <stdio.h>

void MDC() {
    int resto, x, y, a, b;

    printf("Para o calculo do MDC insira dois números: ");
    scanf(" %d %d", &a, &b);

    x = a;
    y = b;
        
    do {
        resto = x % y;
        x = y; 
        y = resto;
    } while(resto != 0);
    printf("O MDC entre %d e %d = %d", a, b, x);
} 

int main () {

printf("O máximo divisor comum (MDC ou M.D.C) corresponde ao produto dos divisores comuns entre dois ou mais números inteiros.\n");

MDC();

return 0;
}    
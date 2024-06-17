
//Aluno: Matheus Aguiar do Ouro
//Matrícula: 202410515

#include <stdio.h>

int main(void) {
 float sal, resultado, lq;
  
  printf("Insira seu rendimento mensal bruto:\n");
  scanf("%f", &sal);

  
if (sal <= 2112.00) {
  printf("Você é isento de imposto de renda\n");
} else if (sal <= 2826.65) {
 resultado = (sal * 0.075) - (158.40);
  lq = (sal - resultado);
   printf("Base de cálculo imposto de renda: de R$ 2112.01 até R$ 2826.65 \nalíquota de 7.5 % \nparcela a deduzir de R$ 158.40  \ntaxa a pagar: %f \nrendimento liquido: %f", resultado, lq);
} else if (sal <= 3751.05) {
  resultado = (sal * 0.15) - (370.40);
  lq = (sal - resultado);
  printf("Base de cálculo imposto de renda: de R$ 2826.66 até R$ 3751.05 \nalíquota de 15.0 % \nparcela a deduzir de R$ 370.40 \ntaxa a pagar: %f \nrendimento liquido: %f", resultado, lq);
} else if (sal <= 4664.68) {
  resultado = (sal * 0.225) - (651.73);
  lq = (sal - resultado);
  printf("Base de cálculo imposto de renda: de R$ 3751.06 até R$ 4664.68 \n alíquota de 22.5 % \nparcela a deduzir de R$ 651.73 \ntaxa a pagar: %f \nrendimento liquido: %f", resultado, lq);
} else { 
  resultado = (sal * 0.275) - (884.96);
  lq = (sal - resultado);
  printf("Base de cálculo imposto de renda: se redendimento > 4664.69 \nalíquota de 27.5 % \nparcela a deduzir de R$ 884.96 \ntaxa a pagar: %f \nrendimento liquido: %f", resultado, lq);  
}  
 
  return 0;
}
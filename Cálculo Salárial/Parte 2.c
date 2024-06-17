//Aluno: Matheus Aguiar do Ouro 
//Matrícula: 202410515

#include <stdio.h>

int main(void) {
    float sal = 0, lq = 0, inss = 0, transporte = 0, saude = 0, desconto = 0, alimentação = 0, cal = 0, alq = 0, impr = 0, impr1 = 0, dep = 0;
  int dependentes = 0;


    printf("Insira seu rendimento mensal bruto: \n");
    scanf("%f", &sal);

    //adição da parte 1 com o calculo do inss e dependentes

    if (sal <= 2112.00) {
       printf("Você é isento de Imposto de Renda.\n");
     } else if (sal <= 2826.65) { 
       alq = 0.075; 
       cal =  158.40;
     } else if (sal <= 3751.05) { 
       alq = 0.15;
       cal = 370.40;
     } else if (sal <= 4664.68) { 
       alq = 0.225;
       cal = 651.73;
     } else {
       alq = 0.275;
       cal = 884.96;
     }

  //calculo do inss feito de forma progressiva
  if (sal <= 1412.00) {
      inss = sal * 0.075;
  } else if (sal <= 2666.68) {
      inss = 1412.00 * 0.075 + (sal - 1412.00) * 0.09;
  } else if (sal <= 4000.03) {
      inss = 1412.00 * 0.075 + (2666.68 - 1412.00) * 0.09 + (sal - 2666.68) * 0.12;
  } else if (sal <= 7786.02) {
      inss = 1412.00 * 0.075 + (2666.68 - 1412.00) * 0.09 + (4000.03 - 2666.68) * 0.12 + (sal - 4000.03) * 0.14;
  } else {
      inss = 908.86;
  }


   printf("Informe o número de dependents: \n");
   scanf("%i", &dependentes);

  dep = dependentes * 189.59;
  impr = sal - inss;
  impr1 = (impr * alq) - cal;


  saude = sal * 0.05;
  alimentação = sal * 0.10;
  transporte = sal * 0.06; //A empresa arca com 8% e o funcionário com 6%

  desconto = inss + saude + transporte + impr1 + alimentação - dep;

    lq = (sal - desconto);


    printf("\nBase de cálculo imposto de renda: \n");
    printf("\nMenor ou igual que R$2.112,00 - Isento\n");
    printf("\nEntre R$2.112,01 e R$2826,65 - alíquota de 7,5%% - parcela a deduzir de R$ 158,40\n");
    printf("\nEntre R$2826,66 e R$3751,05 - alíquota de 15%% - parcela a deduzir de R$ 370,40\n");
  printf("\nEntre R$3751,06 e R$4664,68 - alíquota de 22,5%% - parcela a deduzir de R$ 651,73\n");
  printf("\nMaior que R$4664,68 - alíquota de 27,5%% - parcela a deduzir de R$ 884,96\n");


    printf("\nElementos da folha de pagamento:\n");
    printf("INSS: %.2f\n", inss);
    printf("Imposto de Renda: %.2f\n", impr1);
    printf("Dependentes: %.2f\n", dependentes * 189.59);
    printf("Beneficios:\n");
    printf("Transporte: %.2f\n", transporte);
    printf("Saúde: %.2f\n", saude);
    printf("Alimentação: %.2f\n", alimentação);

    printf("Total dos descontos: %.2f\n", desconto);

    printf("\nSalário líquido: R$ %.2f\n", lq);

    return 0;
}






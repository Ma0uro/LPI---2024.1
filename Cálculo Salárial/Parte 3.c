//Aluno: Matheus Aguiar do Ouro 
//Matrícula: 202410515

#include <stdio.h>

int main(void) {
float sal = 0, lq = 0, inss = 0, fgts = 0, transporte = 0, saude = 0, desconto = 0, alimentação = 0, cal = 0, alq = 0, impr = 0, impr1 = 0, dep = 0, ferias = 0, fgts_prov = 0, prev = 0, custo_em = 0, Acidente_trab = 0, Sal_Educ = 0;
  int dependentes = 0, tipoe = 0;

  printf("Selecione o modelo de registro da sua empresa para calcular o valor total para manter mensalmente um funcionário:\n 1 - Simples Nacional \n 2 - Lucro Presumido \n Empresas registradas no Simples Nacional são aquelas com receita bruta anual de até R$ 4,8 milhões. \n Empresas registradas no Lucro Presumido são aquelas que faturaram até R$ 78 milhões no ano do calendário anterior e não atuam com atividades impeditivas para esse perfil, como bancos comerciais e de investimento, arrendamento mercantil e seguradoras.\n");
    
    scanf("%i", &tipoe);
  if (tipoe != 1 && tipoe != 2) {
    printf("Seleção inválida, tente novamente com os números 1 ou 2.\n");
  } else if (tipoe == 1) {
    printf("\nEncargos que entram em conta no modelo Simples Nacional são:\n Fração de férias: 11,11%%\n Fração de 13 salário: 8,33%%\n FGTS: 8%%\n FGTS/Provisão de multa para rescisão: 4%%\n Transporte = 8%% \nPrevidenciário(férias, FGTS e Descanso Semanal Remunerado): 7,93%%\n");
    printf("\nInsira o salário bruto do funcionario:\n");
    scanf("%f", &sal);

    fgts = sal * 0.08;
    fgts_prov = sal * 0.04;
    ferias = sal * 0.11;
    prev = sal * 0.0793;
    transporte = sal * 0.08; 
    custo_em = sal + fgts + fgts_prov + ferias + prev + transporte;

    printf("\nO custo total para manter esse funcionário mensalmente é de: R$%.2f", custo_em);
  }  else {
    printf("\nEncargos que entram em conta no modelo Lucro Presumido são:\n FGTS: 8%%\n FGTS/Provisão de multa para rescisão: 4%%\n Fração de férias: 11,11%%\n Fração de 13 salário: 8,33%% \n INSS patronal: 20%%\n Transporte = 8%% \nSeguro Acidente de Trabalho: 3%%\n Salário Educação: 2,5%%\n Incra/SENAI/SESI/SEBRAE: 3,3%%\n Previcenciário(férias, FGTS e Descanso Semanal Remunerado): 7,93%%\n");
    printf("\nInsira o salário bruto do funcionario:\n");
    scanf("%f", &sal);

      fgts = sal * 0.08;
      fgts_prov = sal * 0.04;
      ferias = sal * 0.11;
      prev = sal * 0.0793;
      inss = sal * 0.20;
      Acidente_trab = sal * 0.03;
      Sal_Educ = sal * 0.025;
      transporte = sal * 0.08;
    custo_em = sal + fgts + fgts_prov + ferias + prev + inss + Acidente_trab + Sal_Educ + transporte;
    printf("\nO custo total para manter esse funcionário mensalmente é de: R$%.2f\n\n", custo_em);
  }    

    
   
    printf("Calcule o seu rendimento mensal liquido:\n");
    printf("\nInsira seu rendimento mensal bruto: \n");
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

  fgts = sal * 0.08;
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
    printf("FGTS: %.2f\n", fgts);
    printf("Transporte: %.2f\n", transporte);
    printf("Saúde: %.2f\n", saude);
    printf("Alimentação: %.2f\n", alimentação);

    printf("Total dos descontos: %.2f\n", desconto);

    printf("\nSalário líquido: R$ %.2f\n", lq);

    return 0;
}






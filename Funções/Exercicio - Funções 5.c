//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515

#include <stdio.h>
#include <stdlib.h>

float calcINSS(float sal) {
    float inss = 0;
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
    return inss;
}

float calcIRPF(float sal, float inss, int deps) {
    float impr, impr1, alq = 0, cal = 0, dep;

    if (sal <= 2112.00) {
        return 0;
    } else if (sal <= 2826.65) { 
        alq = 0.075; 
        cal = 158.40;
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

    dep = deps * 189.59;
    impr = sal - inss - dep;
    impr1 = (impr * alq) - cal;

    return (impr1 < 0) ? 0 : impr1;
}

float calcSalLiq(float sal, int deps) {
    float inss = calcINSS(sal);
    float irpf = calcIRPF(sal, inss, deps);
    float saude = sal * 0.05;
    float transp = sal * 0.06;
    float alim = sal * 0.10;
    float desc = inss + saude + transp + irpf + alim;

    return sal - desc;
}

float calcCustoSimples(float sal) {
    float fgts = sal * 0.08;
    float fgts_prov = sal * 0.04;
    float ferias = sal * 0.11;
    float prev = sal * 0.0793;
    float transp = sal * 0.08; 
    return sal + fgts + fgts_prov + ferias + prev + transp;
}

float calcCustoLucro(float sal) {
    float fgts = sal * 0.08;
    float fgts_prov = sal * 0.04;
    float ferias = sal * 0.11;
    float prev = sal * 0.0793;
    float inss = sal * 0.20;
    float acid_trab = sal * 0.03;
    float sal_educ = sal * 0.025;
    float transp = sal * 0.08;
    return sal + fgts + fgts_prov + ferias + prev + inss + acid_trab + sal_educ + transp;
}

int main() {
    int tipoe;
    float sal;
    int deps;

    printf("Selecione o modelo de registro da sua empresa para calcular o valor total para manter mensalmente um funcionário:\n 1 - Simples Nacional \n 2 - Lucro Presumido\n");
    scanf("%d", &tipoe);

    if (tipoe != 1 && tipoe != 2) {
        printf("Opção invalida, tente novamente com os números 1 ou 2.\n");
        return 1;
    }

    printf("Insira o salário bruto do funcionário:\n");
    scanf("%f", &sal);

    printf("Informe o número de dependentes:\n");
    scanf("%d", &deps);

    float custo_total = 0;
    if (tipoe == 1) {
        custo_total = calcCustoSimples(sal);
    } else {
        custo_total = calcCustoLucro(sal);
    }

    float sal_liq = calcSalLiq(sal, deps);

    printf("O custo total para manter esse funcionário mensalmente é de: R$%.2f\n", custo_total);
    printf("O salário líquido a ser recebido pelo colaborador é de: R$%.2f\n", sal_liq);

    return 0;
}

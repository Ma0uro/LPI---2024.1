//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515


#include <stdio.h>

void IMC_Adultos() {
    float imc, peso, altura;

    printf("Insira sua altura em m e peso em kg: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if (imc > 30) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está enquadrado na faixa da obesidade.\n");
        printf("Para atingir um valor de IMC normal, seu peso deve estar entre 62.6 kg e 84.3 kg.\n");
    } else if (imc > 24.9 && imc <= 30) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está com sobrepeso.\n");
        printf("Para atingir um valor de IMC normal, seu peso deve estar entre 62.6 kg e 84.3 kg.\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com a Organização Mundial da Saúde, seu IMC é considerado normal para a sua altura.\n");
        printf("Seu peso pode variar entre 62.6 kg e 84.3 kg.\n");
    } else {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com a Organização Mundial da Saúde, seu IMC está abaixo do recomendado para a sua altura.\n");
        printf("Para atingir um valor de IMC normal, seu peso deve estar entre 62.6 kg e 84.3 kg.\n");
    }
}

void IMC_IDOSOS() {
    float imc, peso, altura;

    printf("Insira sua altura em m e peso em kg: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if (imc > 27) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está acima do peso ideal.\n");
        printf("Para ser considerável saudável seu IMC deve estar entre 22 e 27.\n");
    } else if (imc >= 22 && imc <= 27) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está saudável, continue assim. :)\n");
    } else {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está abaixo do peso ideal.\n");
        printf("Para ser considerável saudável seu IMC deve estar entre 22 e 27.\n");
    }
}

void IMC_Adolescentes() {
    float imc, peso, altura;

    printf("Insira sua altura em m e peso em kg: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if (imc > 22.5) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está enquadrado na faixa da obesidade.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 16.7 e 19.6.\n");
    } else if (imc > 19.6 && imc <= 22.5) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está com sobrepeso.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 16.7 e 19.6.\n");
    } else if (imc >= 16.7 && imc <= 19.6) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está saudável, continue assim. :)\n");
    } else {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está abaixo do peso ideal.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 16.7 e 19.6.\n");
    }
}

void IMC_Cr() {
    float imc, peso, altura;

    printf("Insira sua altura em m e peso em kg: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if (imc > 18.5) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está enquadrado na faixa da obesidade.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 13 e 16.8.\n");
    } else if (imc > 16.8 && imc <= 18.5) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está com sobrepeso.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 13 e 16.8.\n");
    } else if (imc >= 13 && imc <= 16.8) {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está saudável, continue assim. :)\n");
    } else {
        printf("IMC = %.1f kg/m^2\n", imc);
        printf("De acordo com o seu IMC você está abaixo do peso ideal.\n");
        printf("Para ficar saudável seu IMC deve ficar entre 13 e 16.8.\n");
    }
}

int main() {
    int idade;

    printf("IMC é a sigla de Índice de Massa Corporal, um parâmetro que é utilizado para avaliar se o peso está dentro do valor ideal para a altura.\n");
    printf("Para fazer o cálculo do seu IMC informe sua idade:\n");
    scanf("%d", &idade);

    if (idade > 59) {
        IMC_IDOSOS();
    } else if (idade >= 20 && idade <= 59) {
        IMC_Adultos();
    } else if (idade >= 10 && idade < 20) {
        IMC_Adolescentes();
    } else {
        IMC_Cr();
    }

    printf("\nPara melhorar o IMC, é importante verificar se está acima ou abaixo do peso considerado normal.\n");

    return 0;
}

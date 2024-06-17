//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515
//Calculos feitos com base em: http://www.uesc.br/a_uesc/regimento.pdf https://uesc.vercel.app/calculadora


#include <stdio.h>

float arredondamento(float num, int precisao) {
    int multiplicador = 1;
    for (int i = 0; i < precisao; i++) {
        multiplicador *= 10;
    }

    float temporario = num * multiplicador;

   //verificação de parte fracionaria
    if (temporario > (int)temporario) {
        temporario = (int)temporario + 1;
    }

    float resultado = temporario / multiplicador;
    return resultado; //retorna valor arredondado
}


void exibirNota(int credito, float nota) {
  printf("Nota %d: %.2f\n", credito, nota);
}

int main() {

  int quantidade, faltas;
  float media = 0.0;
  float frequencia = 0;

  printf("Digite a quantidade de creditos da disciplina: ");
  scanf("%d", &quantidade);

  if (quantidade < 2 || quantidade > 10) {
    printf("Quantidade de creditos invalida");
  return 1;
  }

int carga_h = 15 * quantidade;  
float notas[quantidade];

printf("Carga hóraria de: %d horas\n", carga_h);

for (int i = 0; i < quantidade; i++) {
  printf("Digite a nota do creditos %dº:\n ", i + 1);
  scanf("%f", &notas[i]);

  media += notas[i];

}

media = media / quantidade;
float media_a =  arredondamento(media, 1);

printf("Insira a quantidade de faltas no semestre: ");
scanf("%d", &faltas);


frequencia = (carga_h - faltas) * 100 / carga_h;

if (frequencia >= 75 && media_a >= 7.00 ) {
  for(int i = 0; i < quantidade; i++) {
    exibirNota(i + 1, notas[i]);
  } 

  printf("Frenquencia %.0f%%\n", frequencia);
  printf("Sua média foi: %.1f\n", media_a);
  printf("Parabéns, você foi aprovado!");

} else if (frequencia >= 75 && media_a <= 1.69) {
  for(int i = 0; i < quantidade; i++) {
    exibirNota(i + 1, notas[i]);
  }

  printf("Frenquencia %.0f%%\n", frequencia);
  printf("Sua média foi: %.1f\n", media_a);
  printf("Você foi reprovado pela média e não tem direito a prova final!\n");

} else if (frequencia < 75 && media_a > 1.69) {
  for(int i = 0; i < quantidade; i++) {
    exibirNota(i + 1, notas[i]);
  }

  printf("Frenquencia %.0f%%\n", frequencia);
  printf("Sua média foi: %.1f\n", media_a);
  printf("Faltas: %d\n", faltas);
  printf("Você foi reprovado por falta por não obter freqüência igual ou superior a 75%% da carga horária da disciplina ou atividade.!\n");

} else if (frequencia < 75 && media_a <= 1.69) {
  for(int i = 0; i < quantidade; i++) {
    exibirNota(i + 1, notas[i]);
  }

  printf("Frenquencia %.0f%%\n", frequencia);
  printf("Sua média foi: %.1f\n", media_a);
  printf("Faltas: %d", faltas);
  printf("Você foi reprovado por falta de frequência e pela média e não tem direito a prova final!\n");

} else {

  float Nota_F = (5 - media_a * 0.6) / 0.4;
  for(int i = 0; i < quantidade; i++) {
     exibirNota(i + 1, notas[i]);
  }

  printf("Frenquencia %.0f%%\n", frequencia);
  printf("Sua média foi: %.1f\n", media_a);
  printf("Você tem direito a prova final!\n");
  printf("Você precisa tirar no mínimo %.2f na prova final para passar!", Nota_F);

}

  return 0;
}
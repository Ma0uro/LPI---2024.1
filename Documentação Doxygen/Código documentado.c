//Alunos: Matheus Aguiar do Ouro(202410515) e Maria Luiza Oliva Santos(202320113)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Estrutura que armazena dados de uma turma.
 */

struct DadosTurma {
float notas[10];    /**< Notas dos créditos. */
float media;      /**< Média das notas. */
int creditos;    /**< Quantidade de créditos. */
int faltas;      /**< Quantidade de faltas. */
const char *turma[19]; /**< Lista de alunos da turma. */
};

/**
 * @brief Arredonda um número para a precisão especificada.
 * 
 * @param num Número a ser arredondado.
 * @param precisao Número de casas decimais.
 * @return float Número arredondado.
 */

float arredondamento(float num, int precisao) {
    int multiplicador = 1;
    for (int i = 0; i < precisao; i++) {
        multiplicador *= 10;
    }

    float temporario = num * multiplicador;

    if (temporario > (int)temporario) {
        temporario = (int)temporario + 1;
    }

    float resultado = temporario / multiplicador;
    return resultado; 
}

void exibirNota(int credito, float nota) {
  printf("Nota %d: %.2f\n", credito, nota);
}

/**
 * @brief Função principal do programa.
 * 
 * @return int Código de retorno do programa.
 */

int main() {

float frequencia = 0;  
  
struct DadosTurma aluno;

// Lista de nomes dos alunos    
  aluno.turma[0] = "Adrielle dos Santos Silva";
  aluno.turma[1] = "Alex Amaral dos Santos";
  aluno.turma[2] = "Andre Nascimento Pardinho";
  aluno.turma[3] = "Artur Rodrigues Santos";
  aluno.turma[4] = "Bruno Costa Queiroz";
  aluno.turma[5] = "Hildo de Jesus Santos Neto";
  aluno.turma[6] = "Igor Daniel Rocha de Jesus";
  aluno.turma[7] = "Isaque Silva Passos Ribeiro";
  aluno.turma[8] = "Jessica Meira Costa";
  aluno.turma[9] = "Kaiala de Jesus Santos";
  aluno.turma[10] = "Maria Luiza Oliva Santos";
  aluno.turma[11] = "Matheus Aguiar do Ouro";
  aluno.turma[12] = "Olinoedson Silva Sena";
  aluno.turma[13] = "Rebecca Santana Santos";
  aluno.turma[14] = "Ruan Rosetti da Silva";
  aluno.turma[15] = "Samuel Ferreira Santos";
  aluno.turma[16] = "Thais Sousa Leite";
  aluno.turma[17] = "Thauan Allves";
  aluno.turma[18] = "Yuri Thomaz dos Santos Carvalho";

  int continuar = 1; 

  while (continuar) {
      printf("--------------- DADOS DA TURMA ---------------\n");
      // Exibe a lista de alunos
      for (int i = 0; i < 19; i++) {
          printf("Discente: %d: %s\n", i+1, aluno.turma[i]); 
      }
      printf("----------------------------------------------\n"); 

      int escolha_aluno;
      printf("\nEscolha o aluno (1-19): ");
      scanf("%d", &escolha_aluno);
      escolha_aluno--;
      if(escolha_aluno > 18 || escolha_aluno < 0) {
          printf("Escolha inválida.\n");
          return 1; 
      }
      printf("Aluno: %s\n", aluno.turma[escolha_aluno]);

      printf("Insira a quantidade de créditos da matéria: ");
      scanf(" %d", &aluno.creditos);  

      if (aluno.creditos < 2 || aluno.creditos > 10) {
          printf("Quantidade de créditos inválida\n");
          return 1; 
      }

      int Carga_Horaria = aluno.creditos * 15;  

      printf("Insira a quantidade de faltas do aluno: ");
      scanf(" %d", &aluno.faltas);

      if (aluno.faltas > Carga_Horaria) {
          printf("A quantidade de faltas excede a carga horária\n");
          return 1; 
      }
    
    aluno.media = 0.0;

      for (int i = 0; i < aluno.creditos; i++) {
          printf("Digite a nota do crédito %dº:\n ", i + 1);
          scanf("%f", &aluno.notas[i]);

          aluno.media += aluno.notas[i];
      }

      // Calcula a média normal do aluno e depois faz o arredondamento
      aluno.media = aluno.media / aluno.creditos;
      float media_a =  arredondamento(aluno.media, 1);

      // Calcula a frequência do aluno
      float frequencia = (Carga_Horaria - aluno.faltas) * 100.0 / Carga_Horaria; 

      // Exibe a ficha do discenete
      printf("------------ FICHA DO DISCENTE -------------\n");
      printf("Discente: %s\n", aluno.turma[escolha_aluno]);  
      printf("Faltas: %d\n", aluno.faltas);
      printf("Frequência: %.2f%%\n", frequencia);
      for(int i = 0; i < aluno.creditos; i++) {
          exibirNota(i + 1, aluno.notas[i]);
      }
      printf("Média: %.1f\n", media_a);
      printf("--------------------------------------------\n");
      printf("Deseja ver a ficha de outro discente? (1 - Sim, 0 - Não): ");
      scanf("%d", &continuar);
  }

return 0;
}

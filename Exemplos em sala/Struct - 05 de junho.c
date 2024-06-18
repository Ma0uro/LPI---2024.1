#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[] ) {
  struct pessoa {
  char nome[50];
  char snome[50];
  int idade;
};
  
  struct pessoa myPessoa;
  printf("\n-------------- Cadastro -----------------\n");
  printf("\nNome......: ");
  fflush(stdin);
  fgets(myPessoa.nome, 50, stdin);
  printf("Sobrenome.: ");
  fflush(stdin);
  fgets(myPessoa.snome, 50, stdin);
  printf("Idade.....: ");
  fflush(stdin);
  scanf("%i", &myPessoa.idade);
  printf("\n-------------- Show Cadastro ---------------\n");
  printf("Nome: %s %s \n", myPessoa.nome, myPessoa.snome);
  printf("Idade: %i\n", myPessoa.idade);
  
  
  
  
  
  
  return 0;
}
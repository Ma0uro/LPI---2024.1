//Nome: Matheus Aguiar do Ouro
//Matricula: 202410515


#include <stdio.h>
#include <string.h>


int main () {
  int quantidade;
  char auxiliar[75];
  
  printf("Digite a quantidade de nomes que deseja inserir (10 - 20): ");
  scanf("%d", &quantidade);
    
    if(quantidade < 10 || quantidade > 20) {
        printf("Quantidade inválida.");
        return 1;
    }

  getchar();

  char nomes[quantidade][75];
  
    for(int i = 0; i < quantidade; i++) {
        printf("Insira o nome %d: ", i + 1);
        fgets(nomes[i], 75, stdin);
    }
    
  printf("\nNomes na ordem inserida:\n");
  for(int i = 0; i < quantidade; i++) {
    printf("%s", nomes[i]);
  }

  // Ordenação dos nomes com o algoritmo Bubble Sort
  for (int i = 0; i < (quantidade-1) ; i++ ) { 
   for(int j = i + 1; j < quantidade; j++ ) {
      if ( strcmp( nomes[i], nomes[j] ) > 0 ) {
          strcpy ( auxiliar, nomes[i] );
                 strcpy( nomes[i], nomes[j] );
                 strcpy( nomes[j], auxiliar) ;
      }
   }
}
  printf("\nNomes em ordem alfabética:\n");
  for(int i = 0; i < quantidade; i++){
    printf("%s", nomes[i]);
  }

  printf("\nPrimeiro nome: %s", nomes[0]);
  printf("Último nome: %s", nomes[quantidade - 1]);
  if(quantidade % 2 != 0) {
    printf("Nome mediano: %s", nomes[quantidade / 2]);
  } 
  else {
     printf("Nome mediano: %s", nomes[(quantidade - 1) / 2]);
}

  printf("\nNomes na ordem inversa:\n");
  for(int i = quantidade - 1; i >= 0; i--) {
    printf("%s", nomes[i]);
  }
  
  return 0;
}
#include <stdio.h>

int main() {

 int n = 10; 
 int m[n] [n] [n];
 int soma, media; 

  
 for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
     for(int k = 0; k < n; k++) {
       soma = soma + m[n][n][n]; 
       media = (i + j + k) / 3;      
       printf("[%d] + [%d] + [%d] = %d \n média: %d\n ", i, j, k, soma, media);    
    }
   }    
  }
  return 0;
}
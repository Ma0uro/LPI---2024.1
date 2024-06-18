#include <stdio.h>

int main(int argc, char *argv[]) {

  unsigned int resp = 0;
  int limite = 10;
  int i;
  int j;
  int z;
   
  
  for ( i = limite - 1; i >= 0; i--) {
    resp += i;
      printf("");
    for ( j = limite - 1; j >= 0; j--) {
    
      for( z = limite - 1; z >= 0; z-- ){ 
      
      printf("Mensagem %d %d %d\n", i, j, z);
    }  
  }
}
    printf("Total: %d \n", resp);
  
  return 0;
}
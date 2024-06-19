#include <stdio.h>

int main() {
  
  char ch1, ch2, ch3, verificação;

printf("Insira um caractere: \n");
  scanf("%c", &ch1);
    
  
(ch1 >= 'a' && ch1 <= 'z') ? printf("O caractere é uma letra minúscula.\n"):
(ch1 >= 'A' && ch1 <= 'Z') ? printf("O caractere é uma letra maiúscula.\n"):
(ch1 >= '0' && ch1 <= '9') ? printf("O caractere é um número.\n"):
printf("O caractere é um caractere especial.\n");
    
  ch2 = 81;
  
   
    
  printf("\nO caractere da váriável em formato decimal é: %d\n", ch2);
  printf("O caractere da váriável em formato octal é: %o\n", ch2);
  printf("O caractere da váriável em formato hexadecimal é: %x\n", ch2);
  printf("O caractere da váriável em formato caractere é: %c\n", ch2);
  
    
   ch3 = 81 + 32;

  printf("\nO caractere em formato decimal é: %d\n", ch3);
  printf("O caractere em formato octal é: %o\n", ch3);
  printf("O caractere em formato hexadecimal é: %x\n", ch3);
  printf("O caractere em formato caractere é: %c\n", ch3);
  
  
  
  return 0;
  
}
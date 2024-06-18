#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int loop( int nOfLoop );

int main(int argc, char *argv[] ) {
  int nloop = 0;
  double itime = 0;
  double ftime = 0;
  if (argc > 1)
      nloop = atoi(argv[1]);
  else
    nloop = 10000;

  itime = clock();
  int res = loop( nloop );
  ftime = clock();
  
  double ttime = (ftime/CLOCKS_PER_SEC) - (itime/CLOCKS_PER_SEC);
  
  printf("Soma %d %f\n", res, ttime);
  return 0;
}
int loop (int nOfLoop){
  unsigned int soma = 0;

 for ( int i = 0; i < nOfLoop; i++) { 
  soma += i;
 }
  return soma;  
}

//ver quais flags quais o seu processador suporta
//gcc -march=native -O3 -o main main.c


//~/Ex-4-0605$ ./teste2 10000
//bash: ./teste2: No such file or directory
//~/Ex-4-0605$ gcc teste.c -o teste2
//cc1: fatal error: teste.c: No such file or directory
//compilation terminated.
//~/Ex-4-0605$ gcc main.c -o main 
//~/Ex-4-0605$ ./main 10000
//Soma 49995000 0.000007
//~/Ex-4-0605$ 

Algoritmo "Calculadora"
// Disciplina   : [Linguagem de Programação]
// Professor   : Marcelo Honda
// Descrição   : Desenvolvimento de Algoritmo em portugol, criado no visualg
// Autor(a)    : Matheus Aguiar do Ouro
// Data atual  : 25/03/2024
Var
// Seção de Declarações das variáveis 
   num1, num2, resultado, op: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 Escreval("Escolha o tipo de operação:")
   Escreval("1 - adição")
   Escreval("2 - subtração")
   Escreval("3 - multiplicação")
   Escreval("4 - divisão")
   Leia(op)

   Escreval("Insira o primeiro número: ")
   Leia(num1)
   Escreval("Insira o segundo número: ")
   Leia(num2)

   Se op = 1 Então
      resultado <- num1 + num2
   Senao
      Se op = 2 Então
         resultado <- num1 - num2
      Senao
         Se op = 3 Então
            resultado <- num1 * num2
         Senao
            Se op = 4 Então
              Se num2 = 0 Então
                              Escreval("Operação inválida!")
                           Senao
                              resultado <- num1 / num2
                           FimSe
                        FimSe
                     FimSe
                  FimSe
               FimSe

   Escreval(" o resultado da operação é: ", resultado)
FimAlgoritmo
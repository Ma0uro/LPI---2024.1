//Aluno: Matheus Aguiar do Ouro
//Matricula: 202410515


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void Vnum(char a[]) {
    if (a[0] == '\0') {
        printf("\nO valor é NULO\n");
        return;
    }

    int j = strlen(a);
    int num = 1;
    for (int i = 0; i < j; i++) {
        if (!isdigit(a[i])) {
            num = 0;
            break;
        }
    }

    if (num) {
        printf("\nO valor é NUMERICO.\n");
    } else if (isalnum(a[0])) {
        printf("\nO valor é ALFANUMERICO\n");
    } else {
        printf("\nO valor não é NUMERICO, ALFANUMERICO OU NULO\n");
    }
}

void Screscente(int b) {
    printf("Em sequencia: ");
    for (int i = 0; i <= b; i++) {
        printf("%d ", i);
    }
}

void inversa(int c) {
    printf("Na ordem inversa: ");
    for (int i = c; i >= 0; i--) {
        printf("%d ", i);
    }
}


void alternando(int u) {
    int primeiro = 0;
    int ultimo = u;

    printf("Alternando entre o primeiro e ultimo: ");
    while (primeiro < ultimo) {
        printf("%d %d ", primeiro, ultimo);
        primeiro++;
        ultimo--;
    }

    if (primeiro == ultimo) {
        printf("%d ", primeiro);
 }
}

int primo(int a) {
    if (a <= 1) {
        return 0;
    } else {
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}


void calculoP(int p) {
    printf("Números primos até o valor inserido: ");
    for (int i = 2; i <= p; i++) {
        if (primo(i)) {
            printf("%d ", i);
        }
    }
}


int perfeito(int a) {
    int soma = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            soma += i;
        }
    }
    return soma == a;
}

void calculoPerfeitos(int p) {
    printf("Números perfeitos até o valor inserido: ");
    for (int i = 1; i <= p; i++) {
        if (perfeito(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    char valor[30];

    printf("Insira o valor desejado: ");
    scanf("%s", valor);

    Vnum(valor);

    int num = 1;
    for (unsigned int i = 0; i < strlen(valor); i++) {
        if (!isdigit(valor[i])) {
            num = 0;
            break;
        }
    }

    if (num) {
        int a = atoi(valor);
        Screscente(a);
        inversa(a);
        alternando(a);
        if (primo(a)) {
            printf("O numero inserido é PRIMO.\n");
        } else {
            printf("O numero inserido não é PRIMO.\n");
        }
        calculoP(a);
        calculoPerfeitos(a);
    }
    return 0;
}
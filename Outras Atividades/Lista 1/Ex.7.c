#include <stdio.h>

int main() {
    int n, r;

    printf("Insira um número: ");
    scanf("%d", &n);

    r = (n % 6) + 1;

    printf("Número convertido: %d\n", r);

    return 0;
}

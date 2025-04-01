
#include <stdio.h>

int ehPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma == num;
}

void exibirPerfeitos(int limite) {
    for (int num = 1; num <= limite; num++) {
        if (ehPerfeito(num)) {
            printf("%d=", num);
            int primeiro = 1;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    if (!primeiro) {
                        printf("+");
                    }
                    printf("%d", i);
                    primeiro = 0;
                }
            }
            printf("\n");
        }
    }
}

int main() {
    exibirPerfeitos(10000);
    return 0;
}

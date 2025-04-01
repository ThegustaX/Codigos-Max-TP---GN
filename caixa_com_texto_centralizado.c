#include <stdio.h>
#include <string.h>

int main() {
    void caixa_com_texto_centralizado(int largura, char texto[], char caracter) {
        int espacos = (largura - strlen(texto) - 2) / 2;

        for (int i = 0; i < largura; i++) {
            printf("%c", caracter);
        }
        printf("\n");

        printf("%c", caracter);
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }
        printf("%s", texto);
        for (int i = 0; i < (largura - strlen(texto) - espacos - 2); i++) {
            printf(" ");
        }
        printf("%c\n", caracter);

        for (int i = 0; i < largura; i++) {
            printf("%c", caracter);
        }
        printf("\n");
    }

    caixa_com_texto_centralizado(20, "Olá Mundo", '*');
    
    return 0;
}


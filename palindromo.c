#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char texto[]) {
    int inicio = 0;
    int fim = strlen(texto) - 1;
    int palindromo = 1;
    
    while (inicio < fim && palindromo) {
        while (inicio < fim && !isalnum(texto[inicio])) inicio++;
        while (inicio < fim && !isalnum(texto[fim])) fim--;
        
        if (tolower(texto[inicio]) != tolower(texto[fim])) {
            palindromo = 0;
        } else {
            inicio++;
            fim--;
        }
    }
    
    return palindromo;
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;
    
    if (ehPalindromo(texto)) {
        printf("O texto \"%s\" é um palíndromo.\n", texto);
    } else {
        printf("O texto \"%s\" não é um palíndromo.\n", texto);
    }
    
    return 0;
}


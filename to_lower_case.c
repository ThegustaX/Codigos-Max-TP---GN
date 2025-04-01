#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* to_lower_case(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;
    printf("Texto em minúsculas: %s\n", to_lower_case(texto));
    
    return 0;
}


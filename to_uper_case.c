#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* to_upper_case(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;
    printf("Texto em maiúsculas: %s\n", to_upper_case(texto));
    
    return 0;
}

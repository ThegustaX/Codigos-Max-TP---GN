#include <stdio.h>

void alt_casos(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    alt_casos(str);
    printf("%s", str);
    return 0;
}
 


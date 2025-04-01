#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prim_ocorr(char *str1, char *str2) {
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    
    for(int i = 0; i <= tam1 - tam2; i++) {
        int match = 1;
        for(int j = 0; j < tam2; j++) {
            if(str1[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if(match) return i;
    }
    return -1;
}

int main() {
    char str1[100], str2[100];
    scanf("%[^\n]%*c", str1);
    scanf("%s", str2);
    printf("%d", prim_ocorr(str1, str2));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

char** substr(char *str, char sep, int *qtd) {
    int cont = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == sep) cont++;
    }
    *qtd = cont;
    
    char **res = (char**)malloc(cont * sizeof(char*));
    for(int i = 0; i < cont; i++) {
        res[i] = (char*)malloc(100 * sizeof(char));
    }
    
    int pos = 0;
    int j = 0;
    int k = 0;
    while(str[j] != '\0') {
        if(str[j] == sep) {
            res[pos][k] = '\0';
            pos++;
            k = 0;
        } else {
            res[pos][k] = str[j];
            k++;
        }
        j++;
    }
    res[pos][k] = '\0';
    
    return res;
}

int main() 
{
    char str[100];
    char sep;
    int qtd;
    scanf("%s %c", str, &sep);
    char** res = substr(str, sep, &qtd);
    for(int i = 0; i < qtd; i++) {
        printf("%s\n", res[i]);
    }
    return 0; 
}


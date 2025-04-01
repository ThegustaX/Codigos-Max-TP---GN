#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char* Func_Conct(char *str1, char *str2)
{
    int i = 0, j = 0;
    int tamanho1 = 0, tamanho2 = 0;
    while(str1[tamanho1] != '\0')
    {
        tamanho1++;
    }
    while(str2[tamanho2] != '\0')
    {
        tamanho2++;
    }
    char *result = (char*) malloc((tamanho1 + tamanho2 + 1) * sizeof(char));
    
    while(str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0')
    {
        result[i] = str2[j];
        j++;
        i++;
    }
    
    result[i] = '\0';
    
    return result;
}

int main()
{
    char palavra1[100], palavra2[100];
    
    fgets(palavra1, sizeof(palavra1), stdin);
    fgets(palavra2, sizeof(palavra2), stdin);
    
    char *result = Func_Conct(palavra1, palavra2);
    
    printf("%s\n", result);
}

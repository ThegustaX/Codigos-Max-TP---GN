#include <stdio.h>

int converte_str_int(char *str) {
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int main() 
{
    char str[100];
    scanf("%s", str);
    printf("%d", converte_str_int(str));
    return 0;

}



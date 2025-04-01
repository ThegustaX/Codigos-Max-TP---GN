#include <stdio.h>

int ler_str(char *s)
{
    int i = 0;
    while(*s)
    {
        i++;
        s++;
    }
    
    return i;
}

int main()
{
    char text[100];
    int result;
    
    fgets(text, sizeof(text), stdin);
    result = ler_str(text);
    
    printf("%d\n", result);
}

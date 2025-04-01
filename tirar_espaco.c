#include <stdio.h>
#include <string.h>

int tirar_esp(char *s)
{
    int inicio = 0, final = strlen(s) - 1;
    while(s[inicio] == ' ' || s[inicio] == '\t' || s[inicio] == '\n')
    {
        inicio++;
    }
    while(final > inicio && (s[final] == ' ' || s[final] == '\t' || s[final] == '\n'))
    {
        final--;
    }
    
    int i = 0;
    for(i = 0; inicio <= final; inicio++, i++)
    {
        s[i] = s[inicio];
    }
    s[i] = '\0';
}

int main()
{
    char text[100];
    
    fgets(text, sizeof(text), stdin);
    tirar_esp(text);
    
    printf("%s\n", text);
}

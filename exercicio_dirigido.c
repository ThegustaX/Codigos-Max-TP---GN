//Gustavo Nogueria e Luiz Gustavo
#include <stdio.h>
#include <ctype.h>

void Func_Ler(const char *texto, int contagem[26])
    {
        for(int i = 0; i < 26; i++)
        {
            contagem[i] = 0;
        }
        
        for(int i = 0; texto[i] != '\0'; i++)
        {
            char c = tolower((unsigned char)texto[i]);
            
            if(c >= 'a' && c <= 'z')
            {
                contagem[c - 'a'] ++;
            }
            
        }
    }
    
int main()
{
    char texto[10000];
    int cont[26];
    
    fgets(texto, sizeof(texto), stdin);
    
    Func_Ler(texto, cont);
    
    for(int i = 0; i < 26; i++)
    {
        if(cont[i] > 0)
        {
            printf("%c: %d\n", i + 'A', cont[i]);
        }
    }
}

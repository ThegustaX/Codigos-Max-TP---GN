#include <stdio.h>

int main()
{
    void Func_Linha2(char carac)
    {
        for(int i = 0; i < 25; i++)
        {
            printf("%c", carac);
        }
        printf("\n");
    }
    
    Func_Linha2('*');
    printf("CMP 1048\n");
    Func_Linha2('@');
    printf("Tecnicas de Programacao\n");
    Func_Linha2('+');
}

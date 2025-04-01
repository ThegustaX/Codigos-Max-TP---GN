#include <stdio.h>

int main()
{
    void desenha_retangulo_solido(int linha, int coluna, char caracter, char preench)
    {
        for(int i = 0; i < linha; i++)
        {
			for(int j = 0; j < coluna; j++)
			{
			    if (i == 0 || i == linha - 1 || j == 0 || j == coluna - 1) 
			    {
                printf("%c", caracter);
                } 
                else 
                {
                    printf("%c", preench);
                }
			}
			printf("\n");
        }
    }
    
    desenha_retangulo_solido(5, 20, '#', '-');
}




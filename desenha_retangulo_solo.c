#include <stdio.h>

int main()
{
    void desenha_retangulo_solido(int linha, int coluna, char caracter)
    {
        for(int i = 0; i < linha; i++)
        {
			for(int j = 0; j < coluna; j++)
			{
				printf("%c", caracter);
			}
			printf("\n");
        }
    }
    
    desenha_retangulo_solido(5, 20, 'M');
}


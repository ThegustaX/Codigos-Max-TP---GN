#include <stdio.h>

int Func_Vogal(char x)
{
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char letra;
    int result;
    scanf("%c", &letra);
    result = Func_Vogal(letra);
    printf("%d\n", result);
}


#include <stdio.h>
#include <math.h>

int Func_Regular(int x)
{
   if(x <= 0)
   {
       return 0;
   }
    while(x % 2 == 0) x = x / 2;
    while(x % 3 == 0) x = x / 3;
    while(x % 5 == 0) x = x / 5;
    
    if(x == 1)
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
	int valor;
	scanf("%d", &valor);
	if(Func_Regular(valor))
	{
	    printf("O numero %d eh regular\n", valor);
	}
	else
	{
	    printf("O numero %d nao eh regular\n", valor);
	}
}

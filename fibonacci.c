#include <stdio.h>
#include <math.h>

int Func_Fib(int x)
{
    int a = 0, b = 1, aux, i;
    for(i = 0; i <  x - 1; i++)
    {
		aux = a + b;
		a = b;
		b = aux;
    }
    return a;
}
int main()
{
	int valor, result;
	scanf("%d", &valor);
	result = Func_Fib(valor);
	printf("%d\n", result);
}
	


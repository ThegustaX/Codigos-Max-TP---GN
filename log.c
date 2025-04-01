#include <stdio.h>
#include <math.h>

double Func_Log(double x, double base)
{
	if(x <= 0 || base <= 0 || base == 1)
	{
	    printf("Erro: O logaritmando e a base devem ser positivos, e a base não pode ser 1.\n");
	    return -1;
	}
	return log(x) / log(base);
}
int main()
{
	double logarit, base, result;
	scanf("%lf", &logarit);
	scanf("%lf", &base);
	result = Func_Log(logarit, base);
	
	if(result != -1)
	{
	    printf("O resultado é: %.6lf\n", result);
	}
}

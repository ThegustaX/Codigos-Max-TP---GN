#include <stdio.h>
#include <math.h>

double Func_Fat(int x)
{
	int fat = 1;
	
	for(int i = 2; i <= x; i++)
	{
	    fat = fat * i;
	}
	return fat;
}
int main()
{
	int valor, result;
	scanf("%d", &valor);
	result = Func_Fat(valor);
	printf("%d\n", result);
}


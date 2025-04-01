#include <stdio.h>
#include <math.h>

const char* Func_Primo(int x)
{
    int i;
    double r;
    r = sqrt(x);
	for(i = 2; i <= r && x % i != 0; i++)
	{
	}
	
	if(i > r)
	{
	    return "Prime";
	}
	else
	{
	    return "Not Prime";
	}
}
int main()
{
    const char* result;
	int valor;
	scanf("%d", &valor);
	result = Func_Primo(valor);
	printf("%s\n", result);
}

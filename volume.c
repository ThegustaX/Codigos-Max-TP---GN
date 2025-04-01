#include <stdio.h>

double Func_Volume(int r)
{
	double V;
	double pi = 3.14;
	
	V = ((4 * pi) / 3) * (r * r * r);
	return V;
}
	
int main()
{
	double Volume;
	int raio;
	scanf("%d", &raio);
	Volume = Func_Volume(raio);
	printf("%.2lf\n", Volume);
}


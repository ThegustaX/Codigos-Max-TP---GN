#include <stdio.h>

double Func_Area(int r)
{
	double A;
	double pi = 3.14;
	
	A = (r * r) * pi;
	return A;
}
	
int main()
{
	double Area;
	int raio;
	scanf("%d", &raio);
	Area = Func_Area(raio);
	printf("%.2lf\n", Area);
}

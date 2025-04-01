#include <stdio.h>

double Func_Media(double n1, int n2, int n3, int n4)
{
	double media;
	
	media = (n1 + n2 + n3 + n4) / 4.0;
	
	return media;
}
int main()
{
	double n1, n2, n3, n4;
	double media;
	
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	media = Func_Media(n1, n2, n3, n4);
	
	printf("Media = %.2lf\n", media);
}

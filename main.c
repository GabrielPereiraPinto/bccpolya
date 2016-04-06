#include <stdio.h>
double raizq (double);
double modulo (double,double);
//função main
int main (void)
{
	double n;
	scanf ("%lf", &n);
	n = raizq(n);

	printf("%0.2lf\n",n);
}
//função da raiz
double raizq(double x)
{
	double aproximacao = 0.0000001;
	double valor1 = 1.0;
	double valor2 = 0;
	do
			{
        		valor2 = valor1;
        		valor1 = (valor1 + (x/valor1))/2;
			} 
		while (modulo(valor1, valor2) > aproximacao);

	return valor1;


}	
//função do modulo
double modulo(double a, double b)
{
	double result = a-b;

	if(result < 0)
			result *= -1;

		return result;
}

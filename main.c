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
	double ai = 1.0;
	double ak = 0;
	do
			{
        		ak = ai;
        		ai = (ai + (x/ai))/2;
			} 
		while (modulo(ai, ak) > aproximacao);

	return ai;


}	
//função do modulo
double modulo(double a, double b)
{
	double result = a-b;

	if(result < 0)
			result *= -1;

		return result;
}

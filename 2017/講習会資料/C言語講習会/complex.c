#include <stdio.h>
#include <math.h>

typedef struct {
	double re;
	double im;
}complex;

complex SetVal(double, double);
complex Add(complex,complex);
double Abs(complex);
void PrintComplex(complex);

int main(void)
{
	complex a, b, ans;

	a = SetVal(1.0, 3.0);
	b = SetVal(2.0, 4.0);

	printf("複素数aは");
	PrintComplex(a); 
	printf("\n");
	printf("複素数aの絶対値は%f\n", Abs(a));

	printf("複素数bは");
	PrintComplex(b); 
	printf("\n");
	printf("複素数bの絶対値は%f\n", Abs(b));
	
	ans = Add(a, b);
	printf("a + b = ");
	PrintComplex(ans);
	printf("\n");

	return 0;
}

complex SetVal(double a, double b)
{
	complex c;

	c.re = a;
	c.im = b;

	return c;
}

complex Add(complex a, complex b)
{
	complex c;

	c.re = a.re + b.re;
	c.im = a.im + b.im;

	return c;
}

double Abs(complex c)
{
	return sqrt(c.re*c.re + c.im*c.im);
}

void PrintComplex(complex c)
{
	if (c.im >= 0) {
		printf("%f+%fi", c.re, c.im);
	}
	else {
		printf("%f%fi", c.re, c.im);
	}
}
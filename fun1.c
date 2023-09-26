#include <stdio.h>
//function definition
double add(double a, double b)
{
	double s;
	s=a+b;
	return s;
}

int factorial(int num)
{	
	int prod=1;
	for(int i=1;i<=num;i++)
		prod*=i;
	return prod;
	
}
int main()
{
	
	
printf("The factorial of 5 is %d", factorial(5));
	return 0;
}
	

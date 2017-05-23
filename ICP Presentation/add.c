#include <stdio.h>


int main()

{
	float a, b, sum, product, difference;
	float quotient;
	
	printf("Enter any two numbers\n");
	scanf("%f%f", &a,&b);
	sum=a + b;
	product = a*b;
	difference = a - b;
	quotient = a / b;
	printf("The sum of %f and %f is %f\n",a, b, sum);
	printf("The product of %f and %f is %f\n",a, b, product);
	printf("The difference of %f and %f is %f\n",a, b, difference);
	printf("The quotient of %f and %f is %.2f\n",a, b, quotient);
	return 0;
}

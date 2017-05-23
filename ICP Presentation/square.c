#include <stdio.h>
#include <math.h>

void main()

{
	float a, square, squareroot;
	
	printf("Enter any integer:\n");
	scanf("%f", &a);
	
	square = a*a;
	squareroot = sqrt(a);
	
	printf("The square of %.1f is %.1f while its squareroot is %.2f", a, square, squareroot);
}




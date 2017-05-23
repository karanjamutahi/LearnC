#include <stdio.h>
#include <math.h> //You have to link with the mah module on compilation

void main (){
double number, square, squareroot;



printf("Enter number\n\n");
scanf("%lf", &number);
printf("\n");
double d = (double) number;
squareroot = sqrt(number);
square = number*number;
printf("The square of %.2lf is %.2lf and the squareroot is %.2lf. \n",number,square,squareroot);

}
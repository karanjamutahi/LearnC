#include <stdio.h>

int main() {
float a ,b,sum,diff,product,dividend ;

printf("Enter the first number \n");
scanf("%f", &a);
printf("Enter the second number \n");
scanf("%f", &b);

sum = a+b;
diff = a-b;
product = a*b;
dividend = a/b;

printf("\nThe sum is %.2f \n \n",sum);
printf("The difference is %.2f \n \n", diff);
printf("The product is %.2f \n \n", product);
printf("The dividend is %.2f \n \n", dividend);
    return 0;
}
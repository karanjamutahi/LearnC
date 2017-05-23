#include <stdio.h>
#include <stdlib.h>

void main (){
    
int length, width, area, perimeter;
printf("Enter the length of the rectangle\n");
scanf("%d", &length);

printf("Enter the width of the rectangle\n");
scanf("%d", &width);

area = length * width;
perimeter = 2 * (length + width);

printf("The area of the rectangle is %d while its perimeter is %d\n", area, perimeter );
}

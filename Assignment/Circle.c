#include <stdio.h>

int main(){
    int radius, diameter;
    float area;
    // declare vars
    printf("Enter the radius\n");
    //Ask for radius
    scanf("%d", &radius);
     diameter = radius *2;
     area = (22/7)*(radius*radius);
     //perform the math
     printf("\nThe area of the circle of radius %d and diameter %d is %.2f\n", radius,diameter,area);
//display the area & the diameter
return 0;
}

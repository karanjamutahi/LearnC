#include <stdio.h>
#include <math.h>

int main()
{
    
    for (int i=2; i<=20;i+=2){
        int square = i *i;
        double squareroot = sqrt(i);
        printf("%d\t%d\t%.2f\n", i,square,squareroot);
    }
return 0;
}
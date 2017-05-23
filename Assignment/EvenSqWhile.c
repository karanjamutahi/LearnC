#include <stdio.h>
#include <math.h>

int main(){
    int i =2;

    do{
     int   square = i*i;
      double  squareroot = sqrt(i);
        printf("%d\t%d\t%.2f\n",i, square,squareroot);
          i+=2;  
    }

    while(i<=20);

    return 0;
}
#include <stdio.h>

int main (){
    int i = 3;
    int square;

 do {
     square = i*i;
     printf("%d\t\t%d\n", i ,square);
     i+=4;
 }

 while (i<20);



    return 0;
}
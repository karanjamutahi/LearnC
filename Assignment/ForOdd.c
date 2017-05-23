#include <stdio.h>

int main(){
    int i;
  int square;
    for ( i =3;i<20;i+=4){
        square = i*i;
        printf("%d\t\t%d\n",i,square);
    }
}
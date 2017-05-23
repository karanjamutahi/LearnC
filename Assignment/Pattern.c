#include <stdio.h>
int i,k;
int main(){
    k = 8;
for (i=0;i<8;i++){
    printf("*");
}
printf("\n");
--k;
return loop();
}

int loop(){
for (i=0;i<k;i++){
    printf("\n");
}
}
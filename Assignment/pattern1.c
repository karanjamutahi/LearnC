#include <stdio.h>
int k =8;
int j ;
int main (){
if (k<0){
    return 0;
    }

for (j=0;j<8-k;j++){
printf(" ");
}

for(int i=0;i<k;i++){
    printf("*");
}
printf("\n");
--k;
return main();
}

#include <stdio.h>

int main(){
    for (int i =1;i<6;i++){
        printf("\n************************\n");
        for (int j = 1; j<6;j++){
            int result = i*j;
            printf("%d x %d = %d\n", i,j, result);
        }
    }
}
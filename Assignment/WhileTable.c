#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;
    int result;
while (i < 6){
    
    do {

    result = i*j;
    printf("%d x %d = %d", i , j, result);
    i++;
}

while (j<6);
}
i++;
return 0;
}
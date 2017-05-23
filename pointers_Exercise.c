#include <stdio.h>

int a = 10;
//Declare a var
int *p = &a;
//Declare a pointer and assign it the value of the memory address of var a

int main(){
printf("The value of a is %d \n", a);
printf("The value of the memory address of a is %p \n", &a);
printf("The value of the pointer(which is also the memory address of a) is %p \n", p);
printf("To point to %d I need to call the pointer with an asterisk (*p)\n", *p);
printf("The value of the memory address of our pointer is %p \n", &p);
}

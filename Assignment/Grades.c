#include <stdio.h>

int unit1,unit2,unit3,unit4,unit5,unit6,unit7,unit8, total;
float average;
char grade;


int main(){

printf("Enter Your Marks for  Analogue Electronics \n");
scanf("%d",&unit1);
if (unit1>100||unit1<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for Physical Electronics \n");
scanf("%d",&unit2);
if (unit2>100||unit2<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for ODE \n");
scanf("%d",&unit3);
if (unit3>100||unit3<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for Electromag \n");
scanf("%d",&unit4);
if (unit4>100||unit4<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for Programming \n");
scanf("%d",&unit5);
if (unit5>100||unit5<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for Machines \n");
scanf("%d",&unit6);
if (unit6>100||unit6<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for CNT \n");
scanf("%d",&unit7);
if (unit7>100||unit7<0){
    printf("Invalid Input\n");
    return 0;
}

printf("Enter Your Marks for  Mechanical\n");
scanf("%d",&unit8);
if (unit8>100||unit8<0){
    printf("Invalid Input\n");
    return 0;
}

total = unit1 + unit2 + unit3 + unit4 + unit5 + unit6 + unit7 + unit8;

average = total/8;

if(average>100||average<0){
printf("\n Out of Range \n");
return 0;
}

else if(average >=70){
grade = 'A';
}

else if(average>=60){
grade = 'B';
}

else if(average>=50 ){
grade = 'C';
}

else if (average>=40){
grade = 'D';
}

else if (average<40){
grade = 'E';
}

printf("\n Your Total Marks are %d \n",total);
printf("\n Your Average marks are %.2f \n", average);
printf("\n Your Grade is %c \n",grade);

return 0;
//Comment
}

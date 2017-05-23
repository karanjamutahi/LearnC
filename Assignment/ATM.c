#include <stdio.h>

int GETpasswd(),GETacc(),menu(),withdraw(),deposit(),showBal();
//declare functions
long int acc_no; 
int passwd, i, option;
long int acc_db[8] = {12345678, 23456789, 34567890, 45678901, 56789012, 67890123,78901234,89012345};

int passwd_db[8] = {1234,2345,3456,4567,5678,6789,7890,8901};

int bal_db[8] = {983830,4953489,392832,984298,48023834,489,348223,39482};
//an array that stores our acc numbers another for passwds

int acc_match,passwd_match,all_match ;

int current_attempt, remaining_attempts = 3;

int main(){

GETacc();
}
//we want to build the app in functions for easier debugging.
int GETacc(){

printf ("Welcome to Voltz Bank ATM service \nPlease Enter your 8-digit account number below \n\n ");
scanf("%ld",&acc_no);

//check input against the array 
for (i =0;i<8;i++){

    if (acc_db[i] == acc_no){
        acc_match = 1;
        return GETpasswd();
    }


}
printf("\nYou have entered an invalid account number. \n Please call 0717817569 to register with Voltz Bank.\n\n");
return GETacc();
}

int GETpasswd(){
    while (remaining_attempts>=1){
    printf("\nPlease enter you PIN number\n");
    scanf("%d", &passwd);

    //Get password
        if (passwd == passwd_db[i]){
            passwd_match = 1;
            return menu();
            }

    else{
        --remaining_attempts;
    printf("\nIncorrect PIN. You have %d attempt(s) remaining\n", remaining_attempts);
    return GETpasswd();
    }

    }
    //close while loop
    printf("\nYou have been locked out of the system. \nConact customer care on 0710303667 for help\n");
    return 0;
}



int menu(){
    printf("\nChoose an option:\n1:Withdraw Cash\n2:Deposit Cash\n3:Print Mini-Statement\n\n");
    scanf("%d", &option);

    if (option>3||option<1){
        printf("\n Invalid option. Please try again \n");
        return menu();
    }

    switch(option){
        case 1 :
        return withdraw();
        break;

        case 2:
        return deposit();
        break;

        case 3:
        return showBal();
        break;
    }
}

int withdraw(){
int amount;


printf("\nPlease enter the amount you wish to withdraw\n");
scanf("%d", &amount);

int balance = bal_db[i]- amount;

if (amount>bal_db[i]||balance<0){
    printf("\nYou do not have enough money in your account.\n Your current balance is %d \nPlease top up your account\n", bal_db[i]);
    return 0;
}

printf("\nTransaction successful.\n Your current balance is KES %d. \nThank you for using Voltz ATM\n",balance);
return 0;
}

int deposit(){
    printf("\n This option is not yet available. \nPlease contact customer care on 0717817569 for assistance \n");
    return 0;
}

int showBal(){
    int choice;
    printf("\nYour current balance is KES %d. \n\nDo you wish to perform another transaction?\n\n1: Withdraw\n2:Deposit\n3:Exit\n\n", bal_db[i]);
    scanf("%d", &choice);
    switch(choice){
        case 1:
        return withdraw();
        break;

        case 2:
        return deposit();
        break;

        case 3:
        return 0;
        break;
    }
}
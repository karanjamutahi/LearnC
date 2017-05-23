#include <stdio.h>
 
unsigned long amount=50000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
char user[10];

void main()
{
	
	
	
	while (pin != 1520 ) //Checks whether the PIN is incorrect
	{
	
	printf("Enter PIN: \n");	//Prompts user to enter PIN
	scanf("%d", &pin);	
	
	if (pin != 1520)
		printf("Incorrect PIN. Try again!\n"); //Displays an error message informing user of incorrect PIN
	}
	
	
	do
	{
		printf("***********Welcome to Uchumi Bank ATM Service************\n"); //Welcomes user
		/*Provides users with options they can choose from*/
		printf("1. Check Balance\n");											
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("*********************************************************\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: //Displays balance if selected
			printf("\n Your balance is Ksh %lu ", amount);
			break;
		case 2: //Allows user to remove cash from account
			printf("\n Enter the amount you want to withdraw: ");
			scanf("%lu", &withdraw);
			if (withdraw > amount)
			{
				printf("\n Your account balance is insufficient"); //Informs the customer that their account balance is insufficient
			}
			else if (withdraw >(amount - 500)) //Ensures a customer leaves at least Ksh. 500 in their account
			{
				printf("\n You have to leave at least Ksh 500 in you account");
			}
			else
			{
				amount = amount - withdraw; //updates account
				printf("\n\n Collect your Cash");
				printf("\n Your current balance is Ksh. %lu", amount);
			}
			break;
		case 3:
			printf("\n Enter the amount to deposit: "); //Prompts user to enter amount to deposit
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("Your new balance is Ksh %lu", amount);
			break;
		case 4:
			printf("\n Thank you for choosing Uchumi Bank.");
			break;
		default:
			printf("\n The choice you made is invalid");
		}
		printf("\n\n\n Do you wish to make another transaction?(y/n): \n"); //Asks the customer whether they want to make another transaction
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N') 
                    k = 1;
	} while (!k);
	printf("\n\n Thanks for using our ATM services"); //Closes ATM services
}

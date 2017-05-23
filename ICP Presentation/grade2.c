#include <stdlib.h>
#include <stdio.h>

int main()
	{
	//Declaration of variables
	int i=0, n;				
    float total, average, marks;
    char first_name[10];
    char middle_name[10];
    char surname[10];
    char unit[40];
    

    printf("Enter the Student's First name\n"); //Prompts user to enter Student's first name
    scanf("%s", &first_name);

    printf("Enter the Student's Middle name\n");  //Prompts user to enter Student's second name
    scanf("%s", &middle_name);

    printf("Enter the Student's Surname\n");  //Prompts user to enter Student's surname name
    scanf("%s", &surname);
    
    printf("Enter the number of units: \n");  //Prompts user to enter number of units examined
    scanf("%d", &n);
    for (i=1; i<=n; i++)
	{
    printf("Enter unit name: \n");  //Prompts user to enter unit name
    scanf("%s", &unit);
    
	printf("Enter marks attained: \n ");  //Prompts user to enter marks attained in the unit
    scanf("%f", &marks);
    
    if (marks>100 || marks <0)
    {    
    printf("Marks should range bewteen 0 and 100!\n");
    printf("Enter marks attained: \n ");  //Prompts user to enter marks attained in the unit
    scanf("%f", &marks);
	}
        
    total = marks + marks; //Computes total marks
	}


    
    printf("Total is %.2f \n", total);  //Displays total marks attained by student
    printf("Average is %.2f \n", total/n);  //Displays the average mark attained by student
    
    // Allocates grade based on average
    if (average >= 70)
	    printf("Grade A. Excellent!\n");
			
	else if(average >=60)
		printf("Grade B. Good!\n");
		
	 else if (average >= 50)
		printf("Grade C. Satisfactory. \n");
		
	 else if (average >= 40)
		printf("Grade D. Pass. \n");
		
	else if (average <40)
		printf("Fail\n");
		
	
    
return 0;
}

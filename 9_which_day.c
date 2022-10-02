/*
Name:Omprakash A Timashetti
Date:08/09/2022
Description:WAP to find which day of the year

Sample Execution1:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday

Sample Execution2:
Enter the value of 'n' : 9

Choose First Day :

1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7

Sample input:Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365

 */

#include<stdio.h>

int main()
{
    int N_day,first_day,day_of_year,day;                               //Declare the vriable
    printf("Enter the value of 'n':");
    scanf("%d",&N_day);

    if ( N_day > 0 && N_day <= 365 )
    {
        printf("\n");
        printf("Chose first day :\n");
        printf("1.Sunday\n");
        printf("2.Monday\n");
        printf("3.Tuesday\n");
        printf("4.Wednesday\n");
        printf("5.Thursday\n");
        printf("6.Friday\n");
        printf("7.Saturday\n");

        printf("Enter the option to set the first day :");
        scanf("%d",&first_day);
        if ( first_day > 0 && first_day <= 7 )
        {
            day_of_year=(N_day+first_day-1);
            day=(day_of_year % 7);
                switch (day)
                {
                    case 0:
                        printf("The Day is Saturday");
                        break;
                    case 1:
                        printf("The Day is Sunday");
                        break;
                    case 2:
                        printf("The Day is Monday");
                        break;
                    case 3:
                        printf("The Day is Tuesday");
                        break;
                    case 4:
                        printf("The Day is Wednesday");
                        break;
                    case 5:
                        printf("The Day is Thursday");
                        break;
                    case 6:
                        printf("The Day is Friday");
                        break;
                    default:

                }
        }
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7");
        }

    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
    }
    printf("\n");
    return 0;
}






















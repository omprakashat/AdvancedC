/*
Name: Omprakash A Timashetti
Date:06/09/2022
Description:WAP to generate positive Fibonacci numbers

Sample Input1:Enter a number: 8
Sample Ouput1:0 1 1 2 3 5 8

Sample Input2:Enter a number: -5
Sample Output2: Invalid input

Sample Input3:Enter a number:0
Sample output3: 0
*/

#include<stdio.h>
int main()
{
    int first_num=0, second_num=1, number, next_num=0;            //Declaring variables

    printf("Enter a number: ");                                //Enter a Number up to how much fibonacci series needed
    scanf("%d",&number); 
    if( number > 0 )                                            //Check for range if greater than 0 execute true
    {
        while( first_num <= number )                            //check for range within range or not
        {
            printf("%d ",first_num);                           //Print  Number
            next_num = first_num + second_num;                 //Add first number and second number
            first_num = second_num;                            //swap second number to first
            second_num = next_num;                             //swap next number to secondd number
        }
    }
    else if( number == 0 )                                     //If Enter number is = 0
    {
        printf("%d",number);                                   //Print number
    }
    else
    {
        printf("Invalid input");                                //If Enter number is less than 0 Print error message
    }
    printf("\n");
    return 0;
}

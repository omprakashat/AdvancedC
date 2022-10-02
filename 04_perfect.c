/*
Name:Omprakash A Timashetti
Date:07/09/2022
Description:WAP to check if number is perfect or not

Sample Input1:Enter a number: 6
Sample Output1:Yes, entered number is perfect number

Sample Input2:Enter a number: 10
Sample Output2:No, entered number is perfect number

Sample Input3:Enter a number: -1
Sample Output3:Error : Invalid Input, Enter only positive number
 */

#include<stdio.h>
int  main()
{
    int sum=0,factor,num;                                              //Declaration of required variable factor for loop,number,sum  
    printf("Enter number:");
    scanf("%d",&num);
    if ( num > 0 )                                                    //check for entered number is positive or not
    {
        for( factor = 1; factor < num; factor++)                         //for loop used to get factor of number
        {
            if ( num % factor == 0 )                                   //if num % factor gives 0 means its factor of a number
            {
                sum = sum + factor;                                    //add all factor of number
            }
        }
        //Sum of all factor excluding number
        if ( sum == num )                                        //if sum of all factor e equal to enterd number than its a perfect number
        {
            printf("Yes, entered number is perfect number\n");   //Print mesaage it is perfect number
        }
        else
        {
            printf("No, entered number is not a perfect number\n "); //if sum isnot equal to number than  print its not perfect number 
        }
    }
    else
    {
        printf("Error : Invalid Input, Enter only positive number\n");  //if number is less than 0 print invalid message
    }
    return 0;
}

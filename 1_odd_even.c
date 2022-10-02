/*
Name:Omprakash A Timashetti
Date:02/09/2022
Description:WAP to check if number is odd or even,

Sample Input:Enter the value of 'n' : -2
Sample OutPut:-2 is negative even number

Sample Input:Enter the value of 'n' : 2
Sample OutPut: 2 is positive even number

Sample Input:Enter the value of 'n' : -5
Sample OutPut:-5 is negative odd number

Sample Input:Enter the value of 'n' : 0
Sample OutPut:0 is neither even nor  odd number

 */

//Program to check whether number is even or odd.

#include<stdio.h>
int main()
{
    int num;                                                       //initialization of variable
    printf("Enter the value of 'n':");                             //Get the value of number from console
    scanf("%d",&num);
    if (num != 0)                                                  //check the number is 0 or not if not proceed
    {
        if (num%2== 0 )                                            //condition to check given number is even or odd 
        {
            if(num > 0)                                        //if number greater than 0  than number is positive Even 
            {
                printf("%d is positive even number\n",num);
            }
            else                                             //If number is not greater than 0 than number is negative even number
            {
                printf("%d is negative even number\n",num);
            }
        }
        else                                                // Else part will give odd number 
        {
            if(num > 0 )                                     //if number is greater than 0 than it is positive odd number
            {
                printf("%d is positive  odd number\n",num);
            }
            else                                              //if number is not greater than 0 than it is negative odd number
            {
                printf("%d is negative odd number\n",num);
            }

        }
    }
    else
    {
        printf("%d is neither even nor odd\n",num);            //if number is equal to 0 than neither even nor odd
    }
    return 0;
}

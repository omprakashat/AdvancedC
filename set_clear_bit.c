/*
Name:Omprakash A Timashetti
Date:13/09/2022
Description:WAP to check N th bit is set or not, If yes, clear the M th bit

Sample Execution 1:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Updated value of num is 3 

Sample Execution 2:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Updated value of num is 3 
*/

#include<stdio.h>
int main()
{
    int num,M,N,result;                                //Declaration of variable
    printf("Enter the number:");
    scanf("%d",&num);                                   //Enter the number
    printf("Enter 'N':");
    scanf("%d",&N);                                    //Enter nth bit 
    printf("Enter 'M':");
    scanf("%d",&M);                                    //Enter Mth bit
    if( num & ( 1 << N ) )                             //check Nth bit set or not
    {   
        result=((num) & (~(1 << M )) );                //if N th bit set than make Mth bit clear
        printf("updated number is %d\n",result);       //Print updated value
    }
    else
    {
     printf("Updated number is %d\n",num);             //if N th bit is not set print same number
    }
    return 0;
}

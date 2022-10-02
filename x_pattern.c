/*
Name:Omprakash A Timashetti
Date ;8/09/2022
Description:WAP to print X-pattern as shown below

Sample input:Enter the number: 4
Sample Output:
1  4
 23
 23
1  4

Sample input2: Enter the number :5
Sample output:
1   5
 2 4
  3
 2 4
1   5

 */
#include<stdio.h>
int main()
{
    int num,row,col;                             //Declaration Required variables
    printf("Enter number:");                     //Enter the number
    scanf("%d",&num);
    for( row=1;row<=num;row++)                     //for loop use to get pattern for rows
    {
        for( col = 1; col <= num; col++)           //for loop used for column
        {
            if( row == col)                        //To print Diagonal elements    
            {
                printf("%d",col);                  //print column value in pattern
            }

            else if( (row + col ) == num + 1 )      //to print off diagonal element
            {
                printf("%d",col);                   //Print column value in pattern
            }
            else
            {
                printf(" ");                       //for other case print space
            }
        }
        printf("\n");
    }
    return 0;
}

/*
Name:Omprakash A Timashetti
Date ;8/09/2022
Description:WAP to print pattern as shown below

Sample input:Enter the number: 4
Sample Output:
1 2 3 4
5     6
7 8
9

Sample input2: Enter the number :5
Sample output:
1 2 3 4 5
6       7
8    9
10 11
12
 */

#include<stdio.h>

int main()
{
    int row,col,num,count=1;                       //Declare the required variables

    printf("Enter the number:");                      //Enter the number
    scanf("%d",&num);
    for ( row = 1; row <= num; row++)              //For loop to get pattern rows
    {
        for ( col = 1; col <= num; col++)           //for loop for column
        {
            if (row == 1 || col == 1 )              //condition for diagonal element of pattern
            {
                printf("%d ", count++);             //Print number
            }
            else if ( (row + col) == (num + 1))    //Condition to check other elements in pattern 
            {
                printf("%d ",count++);             //Print the number
            }
            else
            {
                printf("  ");                    //print space
            }
        }
        printf("\n");
    }
    return 0;
}

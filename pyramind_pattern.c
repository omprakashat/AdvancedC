/*
Name:Omprakash A Timashetti
Date:08/09/2022
Description:WAP to print pyramid pattern as shown below
Sample input:Enter the Number:4
Sample Output:
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
 */


#include<stdio.h>
int main()
{
    int row,col,num;                              //Declare the variable row,column,Number
    printf("Enter the Number : ");                //Enter the number to get required pattern
    scanf("%d",&num);
    for ( row = 1; row <= num; row++)             //for loop for row to get required pattern
    {
        for( col =1; col <= row; col++)           //for loop for col to get above triangle pattern
        {
            printf("%d ",(num-(row -col )));      //Print Number if col=1 row=1 than (4-(1-1))=4,if col=1,row=2 (4-(2-1))=3,& (4-(2-2)=4
        }
        printf("\n");                              //to print next row
    }
    for ( row = 1; row <= num; row++)              //For loop used to display celow pattern  
    {
        for ( col = row ; col < num; col++)        //for loop of column
        {
            printf("%d ", col+1);                 //Print the value ie col=row,col=1 (col+1)=2,(2+1)=3,(3+1)=4
        }
        printf("\n");                              // To Print next row
    }
    return 0;
}

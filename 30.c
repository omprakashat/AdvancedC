/*********************************************************************************
Name : Omprakash A Timashetti
Date:26/09/2022
Description:

Sample Execution 1:
Enter a number: 8
0, 1, 1, 2, 3, 5, 8

Sample Execution 2:
Enter a number: 10
0, 1, 1, 2, 3, 5, 8

Sample Execution 3:
Enter a number: 21
0, 1, 1, 2, 3, 5, 8, 13, 21

Sample Execution 4:
Enter a number: -12
Invalid input
 *********************************************************************************************/

#include <stdio.h>
int positive_fibonacci(int ,int ,int , int );                  //function prototype of positive fibonacii()

int main()
{
    int number,first=0,second=1,next=0,ret;                    //Declaration and initialization of variables
    printf("Enter a number: ");                                //Enter a number by user                                     
    scanf("%d", &number );
    if(number > 0)                                             //Check for number greater than zero
    {
        positive_fibonacci(number,first,second,next);              //Call function positive_fibonacci()
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
int positive_fibonacci(int number,int first,int second, int next)    //function defination for positive_fibonnacci()
{

    if(  first <= number )                                          //To call function recursively check for number lesser than number
    {
        printf("%d ",first);                                         //Print fibonacci series
        next=first+second;                                           //add two number
        first=second;                                                //assign second to first
        second=next;                                                 //assign next to second
        return positive_fibonacci((number),first,second,next);       //return positive_fibonacci series
    }
}


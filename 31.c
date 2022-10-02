/*********************************************************************************
Name : Omprakash A Timashetti
Date:26/09/2022
Description:

Sample Execution 1:
Enter a number: -8
0, 1, -1, 2, -3, 5, -8

Sample Execution 2:
Enter a number: 10
0, 1, -1, 2, -3, 5, -8

Sample Execution 3:
Enter a number: 21
0, 1, -1, 2, -3, 5, -8, 13, -21

Sample Execution 4:
Enter a number: 12
Invalid input
 *********************************************************************************************/
#include <stdio.h>
int negative_fibonacci(int ,int ,int , int );                                   //Function prototype of negative_fibonacci
int main()
{
    int number,first=0,second=1,next=0,ret;                                    //Declaration of initialization of variables
    printf("Enter a number: ");                                                //Enter limiting number
    scanf("%d",&number);
    if( number < 0 )                                                           //For negative number if number iss less than call function
    {
        negative_fibonacci( number,first,second,next);                             //call negative_fibonacci series()
    } 
    else if( number == 0)                                                      //If number is equal to 0 print zero
    {
        printf("%d",0);
    }
    else                                                                       //If entered limit is positive print inavalid input
    {
        printf("Invalid input");
    }
    printf("\n");
    return 0;
}
int negative_fibonacci(int number ,int first,int second, int next)           //Function defination of negative_fibonacci
{
    static int count;
    if(  count >= number )                                                    //If count greater than number than print number
    {
        printf("%d ",first);                                                  //Print first number
        next=first-second;                                                    //Get next number
        first=second;                                                         //Assign second to first
        second=next;                                                          //Assign next to second
        if( first > 0)
        {
            count = -first;                                                   //check for the first greater if greater make count negative 
        }
        else
        {
            count = first;
        }
        return negative_fibonacci( number ,first,second,next );               //call function recursively
    }
}

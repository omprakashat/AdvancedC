/*
Name:Omprakash A Timashetti.
Date:20/09/2022
Description:Program to toggle 'n' bits from given position of a number.

Sample Execution 1:
Enter the number: 15
Enter number of bits: 2
Enter the pos: 2
Result = 9

Sample Execution2:
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5
Result = 50

 */

#include <stdio.h>

int toggle_nbits_from_pos(int , int , int );               //prototype of function toggle_nbits_from_pos

int main()
{
    int num, n, pos, result = 0;                           //Declaration of variables

    printf("Enter the number: ");                          //Enter the number
    scanf("%d", &num);

    printf("Enter number of bits: ");                     //Enter the number of bits
    scanf("%d", &n);

    printf("Enter the pos: ");                            //Enter the position from where to get n bits
    scanf("%d", &pos);

    result = toggle_nbits_from_pos(num, n, pos);         //function call toggle_nbits_from_pos()

    printf("Result = %d\n", result);                    //Print result
}

int toggle_nbits_from_pos(int num, int n, int pos)       //Function defination 
{
    return (num ^ (((1<<n)-1) << (pos-n+1)));            //To Invert the n number of bits from pos positionth bit of num.
}

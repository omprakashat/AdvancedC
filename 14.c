/*
Name:Omprakash A Timashetti.
Date:20/09/2022
Description:Program to get 'n' bits of a given number.

Sample Execution 1:
Enter the number: 10
Enter number of bits: 3
Result = 2

Sample Execution 2:
Enter the number: 15
Enter number of bits: 2
Result = 3
 */

#include <stdio.h>

int get_nbits( int , int );                       //Prototype declaration of function get_nbits

int main()
{
    int num, n, result = 0;                         //Declaration of variable number,n bits and result to store result

    printf("Enter the number: ");                   //Enter the number
    scanf("%d", &num);

    printf("Enter number of bits: ");               //Enter the number of bits required to print
    scanf("%d", &n);
    result = get_nbits(num, n);                     //Calling function get_nbits get back the result and store it in result variable

    printf("Result = %d\n", result);                 //printing final result
}

int get_nbits(int num, int n )                       //functioon defination of get_nbits
{
    return (num&((1<<n)-1));
}

/*
Name:Omprakash A Timashetti.
Date:20/09/2022
Description:Program to get 'n' bits from given position of a number.

Sample Execution 1:
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Result = 3

Sample Execution2:
Enter the number: 15
Enter number of bits: 2
Enter the pos: 2
Result = 3

 */

#include <stdio.h>

int get_nbits_from_pos(int , int , int );                          //Prototype of function get_nbits_from_pos

int main()
{
    int num, n, pos, result = 0;                                   //Declaration of variable

    printf("Enter the number: ");                                   //Enter the number
    scanf("%d", &num);

    printf("Enter number of bits: ");                               //Enter the number of bits
    scanf("%d", &n);

    printf("Enter the pos: ");                                     //Enter the position from where u want get bits     
    scanf("%d", &pos);


    result = get_nbits_from_pos(num, n, pos);                     //Function calling get_nbits_pos()

    printf("Result = %d\n", result);                              //print the result
}   

int get_nbits_from_pos(int num, int n, int pos)                   //Function defination
{
    return ((num &((1<<n)-1)<<(pos-n+1))>>(pos-n+1));            // toFetch n number of bits from given position 'pos' (starting from LSB) of num and return the decimal value of it.
}

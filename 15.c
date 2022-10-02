/*
Name:Omprakash A Timashetti.
Date:20/09/2022
Description:Program to replace n b1its of a given number.

Sample Execution 1:
Enter the number: 10
Enter number of bits: 3
Enter the value: 12
Result = 12

Sample Execution2:
Enter the number: 15
Enter number of bits: 2
Enter the value: 1
Result = 3
 */

#include <stdio.h>
int replace_nbits(int , int , int );                     //Prototype declaration of function get_nbits

int main()
{
    int num, n, val, result = 0;                         //Declaration of variable number,val,n bits and result to store result

    printf("Enter the number: ");                         //Enter the number
    scanf("%d",&num);

    printf("Enter number of bits: ");                     //Enter the number of bits to be replace in number
    scanf("%d",&n);

    printf("Enter the value: ");                          //Enter the value from where need to get n lsb bits  and replace in number
    scanf("%d",&val);


    result = replace_nbits(num, n, val);                    //Calling function get_nbits get back the result and store it in result variable    

    printf("Result = %d\n", result);
}

int replace_nbits(int num, int n, int val)                    //function defination of replace_nbits().
{
    return ((num & (~((1<<n)-1))) | (val & ((1<<n)-1)));      //Fetch n number of bits from LSB end of val and replace in the last n bits of num.
}

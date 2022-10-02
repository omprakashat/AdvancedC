/*
Name:Omprakash A Timashetti.
Date:20/09/2022
Description:Program to print 'n' bits from LSB of number.

Sample Execution 1:
Enter the number: 10
Enter number of bits: 12
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 

Sample Execution2:
Enter the number: 15
Enter number of bits: 4
Binary form of 15: 1 1 1 1

 */

#include <stdio.h>

int print_bits(int ,int );                                 //Function prototype of print_bits

int main()
{

    int num,n;                                            //Declaration of number and n
    printf("Enter the number: ");                          //Enter number
    scanf("%d",&num);
    printf("Enter number of bits : ");                     //Enter the number of bits to print
    scanf("%d",&n);
    printf("Binary form of %d: ",num);            
    for(int i=(n-1);i>=0;i--)                            //For loop to get bit one by one 
    {
        print_bits( num ,i);                             //Function call print_bits()

    }
    printf("\n");
    return 0;
}

int print_bits(int num,int i)                             //Function defination 
{
    return (num&(1<<i))?printf("%d",1):printf("%d",0) ;     //logic To print n bits from number
}

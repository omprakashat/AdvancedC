/*
Name:Oprakash A Timashetti
Date:13/09/2022
Description:WAP to count number of set bits in a given number and print parity

Sample Execution 1:
Enter the number : 7
Number of set bits = 3
Bit parity is Odd

Sample Execution2:
Enter the number : 15
Number of set bits = 4
Bit parity is Even
 */

#include<stdio.h>

int main()
{
    int num,count=0;                                    //Declation of number,to count the bits
    int i;
    printf("Enter a Number:");                          //Enter the number
    scanf("%d",&num);

    for ( i =0; i <= 31 ; i++ )                        //to shift the bit upto 32 bit used for loop
    {
        if ( (num) & (1 << i ) )                        //To know bit is set or clear number is bit wise and with shifted bit
        {
            count++;                                   //to count how many bits are set in a number
        }
    }
    printf("Number of set bits = %d\n",count);        //print the set bits

    if ( count % 2 == 0 )                              //check for bits are evenor odd
    {
        printf("Bit parity is Even");                  //if even Bit parity is even
    }
    else
    {
        printf("Bit parity is Odd");                  //if odd bit parity is odd
    }
    printf("\n");
    return 0;
}


/*
Name : Omprakash A Timashetti
Date: 21/09/2022
Description:Write a program to implement circular right shift

Sample Execution 1:
Enter num: 12
Enter n : 3
Result : 10000000 00000000 00000000 00000001

Sample Execution 2: 
Enter num: -12
Enter n : 3
Result : 10011111 11111111 11111111 11111110

 */



#include <stdio.h>
int circular_right(int , int );                              //Function prototype of circular_rightshift
int print_bits(int ,int );                                   //Function prototype of print_bits

int main()
{
    int num, n, ret;                                         //Declaration of variables

    printf("Enter num: ");                                   //Enter the number from user   
    scanf("%d", &num);

    printf("Enter n: ");                                     //Enter the n from user
    scanf("%d", &n);

    ret = circular_right(num, n);                              //Function call to get circular right shift
    printf("Result in Binary: ");
    for(int i = (31) ; i>=0; i--)
    {
        print_bits(ret,i);                                   //Function call to get print-bits of circular right shift number
    }  
    printf("\n");
    return 0;
}
int circular_right(int num, int n)                                     //Function defination for circular right shift
{
    return ( ((num & ((1<<n)-1))<<(32-n)) | ((num >> n) & (~(((1 << n)-1) << (32-n)))));       //Logic to grt circular left shift
}
int print_bits(int ret,int i)                                              //function defination for print_bits 
{
    return (ret&(1<<i))?printf("%d ",1):printf("%d ",0) ;                     //logic to print the right shifted number
}

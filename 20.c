/* 
Name :Omprakash A Timashetti
Date:21/09/2022
Description: Write a program to implement circular left shift. 

Sample Ececution 1:
Enter num: 12
Enter n : 3
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0

Sample Execution 2:
Enter num: -2
Enter n : 3
Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1
 */

#include <stdio.h>

int circular_left(int num, int n);                    //Function prototype for circular_left Shift
int print_bits(int ret,int i);                        //Function prototype for printing bits
int main()
{
    int num, n, ret;                                  //Declaration of variables

    printf("Enter num: ");                           //Enter the number 
    scanf("%d", &num);  

    printf("Enter n: ");                              //Enter the n bits to shift left
    scanf("%d", &n);

    ret = circular_left(num, n);                      //Function call for circular_nbit
    printf("Result in Binary: ");
    for(int i = (31) ; i>=0; i--)                   
    {
        print_bits(ret,i);                          //Function call for print_nbits()
    }
    printf("\n");
    return 0;
}

int circular_left(int num, int n)                              //Function defination for circular_left
{
    return  (num << n) | (((num >> (32-n)) & ((1 << n)-1)));    //Logic to get nbit ciular left shift 
}
int print_bits(int ret,int i)                                 //Function defination for print_nbits
{
    return (ret&(1<<i))?printf("%d ",1):printf("%d ",0);          //logic to print bit of cicular left shifted number 
}

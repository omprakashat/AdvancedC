/*
Name : Ompraksh A Timashetti
Date : 21/09/2022
Description:Write a program to put the (b-a+1) lsb’s of num into val[b:a]

Sample Execution :
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158
 */

#include <stdio.h>

int replace_nbits_from_pos(int , int , int , int );                             //Function prototype

int main()
{
    int num, a, b, val, result = 0;                                            //Declaration of variables

    printf("Enter the value of 'num': ");                                       //Enter the value of number from user
    scanf("%d", &num);
    printf("Enter the value of 'a': ");                                        //Enter the value of a from user
    scanf("%d", &a);
    printf("Enter the value of 'b': ");                                      //Enter the value of b from user
    scanf("%d", &b);
    printf("Enter the value of 'val': ");                                      //Enter the value of val from user
    scanf("%d", &val);
    if ( a <= b && b <= 31)
    {
    result = replace_nbits_from_pos( num, a, b, val);                         //Function call replace_nbits_from_pos()
    }
   else
   {
       printf("Enter value of 'b' as between (a <= b <=31)");
   }
    printf("Result = %d\n", result);                                          //Print the result
}
int replace_nbits_from_pos(int num, int a, int b, int val)                      //function defination for replace_nbits_from_pos
{

    return ((val&(~(((1<<(b-a+1))-1)<<(a)))) |((num & ((1<<(b-a+1))-1))<<(a)));  //To get replace_nbits_from_pos
}

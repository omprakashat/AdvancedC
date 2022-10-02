/*
Name:Omprakash A Timashetti
Date:23/09/2022
Description:Write a Program to implement your own isalnum() function.

Sample  Execution 1:
Enter the character: a
The character 'a' is an alnum character.

Sample Execution 2:
Enter the character: ?
The character '?' is not an alnum character.

 */

#include <stdio.h>

int my_isalnum(int ch);                                          //Function prototype of my_isalnum().

int main()
{
    char ch;                                                    //Declaration of ch and ret.
    int ret;

    printf("Enter the character:");                             //Enter the character to be check
    scanf("%c", &ch);

    ret = my_isalnum(ch);                                       //Function call of my_isalnum()
    if(ret == 1)                                                 //If return from function defination is 1 than print below message
        printf("The character '%c' is an alnum character.",ch);  
    else
        printf("The character '%c' is not an alnum character.",ch);   //If return from function defination is 0 than print below message
    printf("\n");
    return 0;
}
int my_isalnum(int ch)
{
    return (ch >= 97 && ch <=122 || ch >= 48 && ch <= 57 || ch >= 65 && ch <= 90 )?1:0;  //logic to get isalnum
}

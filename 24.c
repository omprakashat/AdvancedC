/*
Name:Omprakash A Timashetti
Date: 23/09/2022
Description:Write a program to implement your own islower() function.

Sample Execution 1:
Enter the character: a
Entered character is lower case alphabet

Sample Execution 2:
Enter the character: 3
Entered character is not lower case alphabet
 */

#include <stdio.h>

int is_lower(int ch);                                                 //Function prototype           

int main()
{
    char ch;                                                          //Declaration of variables ch and ret
    int ret;

    printf("Enter the character: ");                                  //Enter character by user
    scanf("%c", &ch);

    ret = is_lower(ch);                                                //Function call is_lower()

    (ret == 1)?printf("Entered character is lower case alphabet"):printf("Entered character is not lower case alphabet");
    // Based on return value, print whether ch is lower case or not
    printf("\n");
    return 0;
}
int is_lower(int ch)                                         //Function defination of is_lower()
{
    return (ch >= 97 && ch <= 102 )? 1: 0;                      //check whether entered character if lowercase or not
}


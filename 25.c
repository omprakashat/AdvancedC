/*
Name:Omprakash A Timashetti
Date: 23/09/2022
Description:Write a program to implement your own ispunct() function.

Sample Execution 1:
Enter the character: a
Entered character is not punctuation character.

Sample Execution 2:
Enter the character: ?
Entered character is punctuation character
 */

#include <stdio.h>

int is_punct(int ch);                                                 //Function prototype  of is_punct();          

int main()
{
    char ch;                                                          //Declaration of variables ch and ret
    int ret;

    printf("Enter the character: ");                                  //Enter character by user
    scanf("%c", &ch);

    ret = is_punct(ch);                                                //Function call is_lower()

    (ret == 1)?printf("Entered character is punctuation character"):printf("Entered character is not punctuation character");
    // Based on return value, print whether ch is punctuation  or not
    printf("\n");
    return 0;
}
int is_punct(int ch)                                         //Function defination of is_punct()
{
    return (ch >= 97 && ch <=122 || ch >= 48 && ch <= 57 || ch >= 65 && ch <= 90 )?0:1; //check whether entered character if punctuation  or not
}


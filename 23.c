/*
Name:Omprakash A Timashetti
Date:23/09/2022
Description:Write a program to implement your own isxdigit() function.
Sample Execution 1:
Enter the character: a
Entered character is an hexadecimal digit

Sample Execution 2:
Enter the character:3
Entered character is  an hexadecimal digit

Sample Execution 3:
Enter the character:G
Entered character is not an hexadecimal digit
 */



#include <stdio.h>

int is_xdigit(int ch);                                      //Function prototype is_xdigit( int )

int main()
{
    char ch;                                                  //Declaration of ch and ret value                        
    int ret;

    printf("Enter the character: ");                         //Enter character fro user
    scanf("%c", &ch);

    ret = is_xdigit(ch);                                   //Call function is_xdigit()         
    // check Based on return value, print whether ch is hexadecimal digit or not
    (ret == 1)?printf("Entered character is an hexadecimal digit"):printf("Entered character is not an hexadecimal digit"); 
    printf("\n");

}
int is_xdigit(int ch)                                        //Function defination of is_xdigit()
{
    return (ch >= 97 && ch <= 102 || ch >= 48 && ch <= 57 || ch >= 65 && ch <= 70 )? 1: 0;   //Check for the character is hexadecimal digit if yes return 1;
}

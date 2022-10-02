/*
Name:Omprakash A Timashetti
Date:08/09/2022
Description:WAP to generate AP, GP, HP series

Sample Execution:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428

Sample Ececution2:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': -5
Invalid input
*/

#include<stdio.h>

int main()
{
    int A,R,N,AP,GP,count;                                       //Declare variable 
    float HP;
   printf("Enter first number 'A': ");                        //Enter the first number 'A' 
   scanf("%d",&A);

   printf("Enter the Common Difference / Ratio 'R':");       //Enter Comman diff /Ratio
   scanf("%d",&R);
   printf("Enter the number of terms 'N':");                 //Enter how many number to be printed
   scanf("%d",&N);
if ( N > 0)                                                  //Check numbers of terms greater than 0 or not
{
   AP=A;                                                     //Initial value of AP  
   printf("AP = ");
   for ( count = 1; count <= N; count++ )
   {
       printf("%d",AP);                                       //Print Arithmatic progression series
      if ( count < N)                                         //Print comma after each number
          printf(", "); 
       AP=AP+R;                                               //To get each AP series
   }
   printf("\n");

   GP=A;                                                      //Initial value of GP
   printf("GP = ");
   for ( count = 1; count <= N; count++ )
   { 
       printf("%d",GP);                                        //Print GP series
       if ( i < N)                                             //To print comma
       printf(", ");
        GP=GP*R;                                              //For all GP series
   }
   printf("\n");
   
   HP=1/(float)A;                                            //Initial value of HP series
   printf("HP = ");
   for ( count = 1; count <= N; count++ )
   { 
       printf("%f",HP);                                      //To print all HP series
           if ( i < N )
           printf(", ");                                     //print comma between each number in series
           A=A+R;                                            //Get Denominator
           HP = 1/(float)A;                                   //HP=1/Denominator
   }
}
else
{
printf("Invalid input");                                     //If enter number of terms less than zero print error
}
   printf("\n");
     return 0;
}

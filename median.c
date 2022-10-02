/*
Name:Omprakash A Timashetti
Date:15/09/2022
Description:

Sample Execution1:

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5                    
#include <stdio.h>


Sample Execution2:

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75     
*/

int main()
{
    int size1,size2,temp,i,j,k;                                     //Declare the variable
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&size1);                                            //Enter the size of Array A
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&size2);                                           //Enter the size of Array B
    float median1,median2;                                        //Declaration of varible for median1 and median2
    float sum1,sum2;                                              //Declare varible for sum1 and sum2
    int ArrayA[size1];
    int ArrayB[size2];                                           //Declare ArrayA and ArrayB


    printf("Enter the elements one by one for Array A: ");         //Enter the elements one by one of ArrayA
    for ( i = 0; i < size1; i++)
    {
        scanf("%d",&ArrayA[i]);

    }

    for(j = 0; j <(size1-1); j++ )                                
    {
        for ( k = j+1; k < size1 ; k++)                            //Sort the ArrayA in ascending order
        {
            if( ArrayA[j] > ArrayA[k] )                           //if initial value is greater swap the number
            {
                temp=ArrayA[j];                                  //swap the number to temp variable
                ArrayA[j]=ArrayA[k];                             //next number to previous num
                ArrayA[k]=temp;                                  //first number to next number
            }

        }
    }
   
    printf("Enter the elements one by one for Array B: ");       //Get the element one by one of ArrayB
    for ( i = 0; i < size2; i++)       
    {
        scanf("%d",&ArrayB[i]);                                 

    }
    for(j = 0; j < (size2-1); j++)
    {
        for ( k= j+1; k < size2; k++)                   // sort element of ArrayB in ascending order
        {
            if( ArrayB[j] > ArrayB[k] )                 //If first number greate than next number swap the number
            {
                temp=ArrayB[j];                         //Swap the first number  to temp variable
                ArrayB[j]=ArrayB[k];                    //next number to first number
                ArrayB[k]=temp;                         //first number swap to next number
            }
        }
    }

    if(size1 % 2 == 0)                                      //is size is even than for median get middle two element
    {   
        sum1 =( ArrayA[(size1/2)-1] + ArrayA[((size1/2)-1)+1] );
        median1=sum1/2;                                       //Average of two will be median of arrayA
    }
    else
    {
        median1 = ( ArrayA[(size1/2)]);                       //if the size is odd midle number of sorted array is a median
    }
    printf("Median of array1 : %g",median1);                  //Print median of ArrayA
    printf("\n");

    if( size2 %2 == 0)                                            //Similarly check for ArrayB Size even or odd
    {
        sum2 =( ArrayB[(size2/2)-1] + ArrayB[((size2/2)-1)+1]);    //if size even sum of two midle terms of sorted array
        median2 = sum2/2;                                         //Average of sum will median2
    }
    else
    {
        median2=( ArrayB[(size1/2)] );                            //if Size is odd median will be middle number of sorted array
    }
    printf("Median of array2 : %g",median2);
    printf("\n");

    float average=((median1 + median2) / 2);
    printf("Median of both arrays : %g",average);   //Median of two sorted array as Average of two median

    printf("\n");  
    return 0;
}


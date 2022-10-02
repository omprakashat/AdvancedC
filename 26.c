/*
Name : Omprakash A Timashetti 
Date : 25/09/2022
Description : Write a Program to find 2nd largest element in an array.

Sample Execution 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5

Sample Execution 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22 
 */

#include <stdio.h>
int sec_largest( int *array,int size)                //Function defination 
{
    int largest = array[0];                          //store array[0] into largest 
    int secondlargest=array[1];                      //Store array[1] into second Element
    int i;
    if ( array[0] > array[1])                       //Check for largest and second largest
    {
        largest=array[0];
        secondlargest=array[1];
    }
    else
    {
        largest=array[1];
        secondlargest=array[0];
    }
    for ( i=2; i < size; i++)                       //After checking largest check for remaining element for second largest element                    
    {
        if ( largest < array[i])                    //if array element greater than largest number put largest into secondlargest and array element into largest
        {
            secondlargest = largest;
            largest=array[i];
        }
        else if( secondlargest < array[i])             //if already largest not less than array element to get second largest 
        {                                              //check for array element greater than second largest than put array element into secondlargest variable
            secondlargest=array[i];
        }

    }
    return secondlargest;                             //return second largent element in array
}
int main()
{
    int size,secondlarge;                                  //Declare variable size secondlargest
    printf("Enter the size of the Array :");                //Enter size of array
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements into the array:");             //Enter the element of the array
    for ( int i=0;i<size; i++)
    {
        scanf("%d",&array[i]);
    }


    secondlarge = sec_largest(array,size);                       //Function call sec_largest()

    printf("Second largest element of the array is %d",secondlarge);  //Print second largest
    printf("\n");
    return 0;
}


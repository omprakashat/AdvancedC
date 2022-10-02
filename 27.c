
/*
Name : Omprakash A Timashetti
Date:25/09/2022
Description:Write a program to find 3rd largest number in an array.

Sample Execution 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Third largest element of the array is 4

Sample Execution 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Third largest element of the array is 11
 */

#include <stdio.h>
int third_largest( int *array,int size)                                  //Function defination for the third_largest()
{
    int max1=array[0];                                                  //Store array[0],array[1],array[2] in max1,max2,max3 respectively
    int max2;
    int max3;
    int i;

    for( i = 0; i < size; i++ )
    {
        if( max1 < array[i])        //check for each array element if array element greater than swap the variable max1,max2,max3,
            {
                max3=max2;                                                 //store max2 in max3
                max2=max1;                                                 //store max1 in max2
                max1=array[i];                                             //Store array element in max1
            }
        else if ((max2 < array[i]) && (max1 > array[i]) )  //Check if max2 less than equal to element and max1 greater than array element
        {
            max3=max2;                                                //store max2 into max3
            max2=array[i];                                            //store rray element into max2
        }
         else if(( max3 <= array[i] ) && ( max1 > array[i] ) && ( max2 >= array[i]))    
        {              //if max3 lessthan equal to element and max1 greater than equal to element and max3 greater than equal to element
            max3=array[i];                                      //store element into max3
        }
    }
    return max3;                                                       //Return max3 to function call

}
int main()
{
    int size,thirdlarge;                                               //Declaration of variable size third largest                           
    printf("Enter the size of the Array : ");                          //Enter the size of Array
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements into the array: ");                     //Enter the elements of an array
    for ( int i=0;i<size; i++)
    {
        scanf("%d",&array[i]);
    }


    thirdlarge=third_largest(array,size);                              //Function call third_largest()

    printf("Third largest element of the array is %d",thirdlarge);     //print the largest number from array
    printf("\n");
    return 0;
}

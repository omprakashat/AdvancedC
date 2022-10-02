#include<stdio.h>
int main()
{
    int first=0, second=1, range, next;

    printf("Enter the range of Fibo series: ");
    scanf("%d",&range);
    if( range < 0 )
    {
        while( first <= range )
        {
            printf("%d ",first);
            next = first - second;
            first = second;
            second = next;
        }
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}

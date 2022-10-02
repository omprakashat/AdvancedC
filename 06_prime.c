#include<stdio.h>

int main()
{
    int i,j,num,m=2;
    printf("Enter the Number :");
    scanf("%d",&num);
    if(num >1)
    {
        int array[num-(1)];
        for( i=2 ; i <= num ; i++ )
        {
            array[i-2]=i;
        }

        for ( i = 2; i * i <= num ; i++ )
        {
            for ( j =i ; j < (num-1) ; j++)
            {
                if( array[j] % i == 0 )
                    array[j]=0;
            }
        }   
        printf("The primes less than or equal to %d are :",num);
        for ( j= 0; j < (num-1) ; j++ )
        {
            if( array[j] != 0 )
            {
                printf("%d ",array[j]);
            }
        }
    }
    else
    {
        printf("Please enter a positive number which is > 1");
    }
    printf("\n");

    return 0;
}

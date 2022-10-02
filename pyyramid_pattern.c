#include<stdio.h>

int main()
{
    int row,col,num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    for ( row = 1; row <= num; row++ )
    {
        for( col = 1; col <= row ; col++ )
        {
            printf("%d",num-(row-col));
        }
        printf("\n");
    }

    for ( row = 1; row <= num; row++ )
    {
        for ( col = row ; col < num ; col-- )
        {
            printf("%d",(col +1));
        }
        printf("\n");
    }

    return 0;
}

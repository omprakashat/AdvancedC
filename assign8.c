#include<stdio.h>
 
int main()
{
 int row,col,num =4,k=1;
 
 for ( row = 1; row <= num; i++ )
 {
     for( col = 1; col <= num ; j++ )
     {
         if (row == col )
         {
             printf("%d",num);
         }
         if( col < row )
         {
             printf("%d", (num-(row-col)));
         }
         
     }
     printf("\n");
 }

    return 0;
}

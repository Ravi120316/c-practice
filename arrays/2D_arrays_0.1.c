//Question 1: Input & Output of a 2D Array (Matrix)
 
#include<stdio.h>
int main () {
    int row , colms ;
    printf("enter the  number of row and colummns") ;
    scanf("%d %d",&row ,&colms);

    int arr[row] [colms] ;
    printf("the rows and columns in the matrix is %d x %d:\n",row ,colms) ;
    for (int i = 0; i < row; i++)
    { for (int j = 0; j < colms; j++)
    {
       scanf("%d", &arr[i][j]);
    }
    
}
printf("the matrix is :\n");
for (int i = 0; i < row; i++)
{
   for (int j = 0; j < colms; j++)
   {
    printf("%d \n", arr[i][j]);
   }
   printf("\n");
}
return 0 ;

    
}
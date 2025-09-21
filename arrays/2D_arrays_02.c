//Q2: Find the Sum of all Elements in a Matrix
#include<stdio.h>
int main () {
    int row , colums ;
    printf("enter the number of row and columns :\n");
    scanf("%d %d",&row ,&colums ) ;

    int arr[row] [colums] ;
    printf("the number of row and columns in the matrix %d x %d is \n",row ,colums);
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < colums; j++)
      {
        scanf("%d" , &arr[i][j]) ;
      }
      
    }
    int sum = 0 ;
    for (int i = 0; i < row; i++)
    {
    for (int j = 0; j < colums; j++)
    {
        sum+= arr[i][j] ;

    }
    printf("the sum of all elements = %d",sum);

    }
    return 0 ;

}
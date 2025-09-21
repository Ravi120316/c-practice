//Q3: Find the Transpose of a matrix 
#include<stdio.h>
int main () {
    int row , colums ;
    printf ("enter the number  of row and columns ") ;
    scanf("%d %d ", &row , &colums) ;

    int arr[row]  [colums] ;
    printf("enter the elements that you enter in matrix :\n");
    for (int i = 0; i < row; i++)
    {
    for (int j = 0; j < colums; j++)
    {
        scanf("%d " , &arr[i][j]) ;

    }
     
    }
    
  printf("the transpose of the matrix is :\n");
  for (int j=0; j < colums; j++)
  {
    for (int i = 0; i < row ; i++)
    {
      printf("%d",arr[i][j]);
    }
     printf("\n");
  }
  return 0 ;
}

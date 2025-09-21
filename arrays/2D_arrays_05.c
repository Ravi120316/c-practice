//: Matrix subtraction 
#include<stdio.h>
int main () {
    int row , colums ;
    printf("enter the number of row and columns in the matrix : \n");
    scanf("%d %d",&row,&colums) ;

    int arr[row][colums] ,brr[row] [colums] , sub[row] [colums];
    printf("enter the elements that want   to be in  first the matrix :\n");
    for (int i = 0; i < row; i++)
    {
 for (int j = 0; j < colums; j++)
 {
    scanf("%d", &arr[i][j]);
 }
 
    }
    printf("enter the elements that you wants to be in second matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            scanf("%d", &brr[i][j]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for ( int  j = 0;  j < colums; j++)
        {      
            sub[i][j] = arr[i][j] - brr[i][j] ;

        }
          printf("subtract of matrix :\n");
          for (int i = 0; i < row; i++)
          {
            for (  int j = 0; j < colums; j++)
            {
                printf("%d \n",sub[i][j]);
            }
           
          }
           printf("\n");
    
    }
  return 0 ;

    
}
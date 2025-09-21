//Q4: Matrix Addition  ( Do matrices input lo (same size ke) aur unka sum nikal ke ek nayi matrix me store karke print karo.)
#include<stdio.h>
int main () {
    int row , colums ;
    printf("enter the number of row and columns in the matrix : \n");
    scanf("%d %d",&row,&colums) ;

    int arr[row][colums] ,brr[row] [colums] , sum[row] [colums];
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
            sum[i][j] = arr[i][j] + brr[i][j] ;

        }
          printf("sum of matrix :\n");
          for (int i = 0; i < row; i++)
          {
            for (  int j = 0; j < colums; j++)
            {
                printf("%d \n",sum[i][j]);
            }
           
          }
           printf("\n");
    
    }
  return 0 ;

    
}
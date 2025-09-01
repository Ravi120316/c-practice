//Q6: Count Even and Odd Numbers in an Array
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number of element :\n");
    scanf("%d",&n);

    int arr[n] ;
    printf("the elements are %d",n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);

    }
    int even =0 ;
    int odd=0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d is a even number \n ",arr[i]);
                even ++;
        } 
        if (arr[i]%2!=0)
        {
            printf("%d is a odd number \n",arr[i]);
  odd ++ ;
        }
        
        
    }
    printf("the number of even is %d \n",even);
        printf("the number of odd is %d \n",odd);

        return 0 ;
        
}
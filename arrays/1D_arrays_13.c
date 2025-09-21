//User se n numbers input lo aur unme se maximum (largest) aur minimum (smallest) element nikaalo.
#include<stdio.h>
int main () {
    int n ;
    printf("enter the  numbers of elements :\n ");
    scanf("%d",&n) ;

    int arr[n];
    printf("entered elements are :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];

    for (int i = 0; i < n; i++)
    {
       if(arr[i] >largest){
        largest=arr[i];
       } 
        if (arr[i]<smallest) {
        smallest=arr[i] ;
       }
    }
    printf("largetst element =%d \n",largest);
    printf("smallest element=%d \n",smallest);
    return 0;
    
}
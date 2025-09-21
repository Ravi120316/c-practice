//User se n numbers input lo, unka sum nikalo, aur फिर usse average calculate karo.
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number of elements :\n");
    scanf("%d", &n) ;
    int arr[n];
    printf("enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0 ;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("sum is =%d \n",sum); 
    float average = sum / n ;

    printf("average=%f \n" , average);

    return 0 ;
}
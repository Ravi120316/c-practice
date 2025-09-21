//User se n numbers input lo aur check karo ki unme se कितने even (सम संख्या) aur कितने odd (विषम संख्या) hain।
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number if elements :\n");
    scanf("%d",&n);

    int arr[n] ;
    printf("entered elements are :\n");
    for (int i = 0; i < n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd=0;
    int even =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0) {
            even ++ ;
        } 
        if(arr[i]%2!=0) {
            odd ++ ;
        }
    }
    printf("count of even numbers is %d",even) ;
    printf("count of odd numbers id %d",odd) ;
    
    return 0 ;
}
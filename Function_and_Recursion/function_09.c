//Palindrome Number Check (using function)
#include<stdio.h>
int pelindrome_check (int n) {
    int reverse=0 , digit   ;
    while (n>0)
    {
       digit=n%10;
       reverse=reverse*10 +digit ;
       n=n/10;

    }
    return reverse;

    
}
int main () {
    int num , result , original ;
    
    printf("enter the number :\n");
    scanf("%d",&num);
     original=num;
    result=pelindrome_check(num);
    
    if(original==result){
        printf(" this ia a pelindrome number \n");
    } else {
        printf(" this is not a pelindrome number \n");
    }
    return 0 ;

}
// Q: Ek program banao jo kisi 3 angle ko input le
// aur bataye ki ye triangle valid hai ya nahi.
// Hint: Agar tino angle ka sum 180 hota hai tabhi triangle valid hota hai.

#include <stdio.h>
int main ()
{
   int angle1, angle2, angle3;
   printf("Enter angle 1st:\n");
   scanf("%d", &angle1);

   printf("Enter angle 2nd:\n");
   scanf("%d", &angle2);

   printf("Enter angle 3rd:\n");
   scanf("%d", &angle3);

   if (angle1 + angle2 + angle3 == 180)
   {
       printf("This is a valid triangle.\n");
   }
   else
   {
       printf("This is not a valid triangle.\n");
   }

   return 0;
}

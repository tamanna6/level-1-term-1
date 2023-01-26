#include<stdio.h>
int main()
{
char a[20]="Tamanna Sultana";
char b[20]="Tamanna Sultana";
   int d=strcmp(a,b);
   if(d==0)
   {
   printf("strings are equal");

   }
   else
   {
   printf("strings are not equal");
   }
   return 0;


}

#include<stdio.h>
int main()
{
int *p,*q,mul;
int a=6,b=7;
p=&a;
q=&b;
mul=*p* *q;
printf("Result after multiplication=%d",mul);
return 0;
}





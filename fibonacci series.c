#include<stdio.h>
int fibonacci(int terms);
int main()
{
int i,terms;
printf("enter number of terms");
scanf("%d",&terms);
for(i=0;i<terms;i++)
{
printf("%d ",fibonacci (i ));
}
return 0;
}
int fibonacci(int terms)
{


if(terms<2)
{
return terms;
}

else
{
return fibonacci(terms-1)+fibonacci(terms-2);

}

}








#include<stdio.h>
int main()
{
int array[100],i,num;
printf("the size of an array\n");
scanf("%d",&num);
printf("the elements of an array\n");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("the even numbers of the element:\n");
for(i=0;i<num;i++)
{
if(array[i]%2==0)
{
printf("%d\n",array[i]);
}
}
printf("the odd numbers of the element:\n");
for(i=0;i<num;i++)
{
if(array[i]%2!=0)
{
printf("%d\n",array[i]);
}
}

return 0;
}












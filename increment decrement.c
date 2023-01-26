#include<stdio.h>
int main()
{
int i,k=0;
for(i=0;i<10;++i)
{
k++;
if(k<5)continue;
if(i%8==0)break;
k=i++;
}
printf("%d",k);
return 0;
}




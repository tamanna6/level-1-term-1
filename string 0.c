#include<stdio.h>
int main()
{
char a[20]="MY World";
int i=0,word=1;
while(a[i]!='\0')
{
 if(a[i]==' ')
 word++;
 i++;

}
printf("%d",word);
return 0;


}

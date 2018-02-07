#include<stdio.h>
void main()
{
int a=0,b=1,c,n;
printf("ENTER NO OF ELEMENTS");
scanf("%d",&n);
printf("\nFIBONACCI SERIES %d %d",a,b);
while(n-2>0)
{
c=a+b;
printf(" %d ",c);
a=b;
b=c;
n--;
}
}



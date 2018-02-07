#include <stdio.h>
int main()
{
 int r,n,rev=0;
 printf("ENTER A NO");
 scanf("%d",&n);

 while(n>0)
 {
     r=n%10;
     rev=rev*10+r;
     n=n/10;
 }
    printf("THE REVERSE NO IS %d",rev);


    return 0;
}

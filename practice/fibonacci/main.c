#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    a=0,b=1;
    printf("ENTER THE RANGE UPTO WHICH YOU WANT TO PRINT ");
    scanf("%d",&n);
    c=a+b;
    printf(" %d ",a);
    printf(" %d ",b);
    printf(" %d ",c);

    while(c<=n)
    {   printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;

    }
 return 0;
}

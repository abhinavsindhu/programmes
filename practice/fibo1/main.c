#include <stdio.h>
#include <conio.h>

int main()
{
    int a=0,b=1,c,n;
    printf("ENTER THE RANGE YOU WANT TO PRINT UPTO\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    c=a+b;

    while(c<=n)
    {
        printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;


    }
    getch();
    return 0;
}

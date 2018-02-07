#include <stdio.h>
int GCD(int,int);
int r;
int main()
{
    int n1,n2,gcd;
    printf("ENTER TWO NUMBERS");
    scanf("%d%d",&n1,&n2);
    gcd=GCD(n1,n2);
    printf("THE GCD IS %d",gcd);
    return 0;
}
int GCD(int a,int b)
{
     r=0;
    if(b!=0)
    {   r=b;
        b=a%b;
        a=r;
        GCD (a,b);
    }
    else
        return a;
}

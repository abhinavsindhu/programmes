#include <stdio.h>
#include <stdlib.h>
int sum=0,r=0;
int sumofevendigit(int a)
{
        r=a%10;
        if (a%2==0)
            sum=sum+r;
        a=a/10;
        if(a>0)
         sumofevendigit(a);
        else
         printf("SUM OF EVEN DIGITS IS %d",sum);
}
int main()
{
    int n;
    printf("ENTER A INTEGER ");
    scanf(" %d",&n);
    sumofevendigit(n);
    return 0;
}

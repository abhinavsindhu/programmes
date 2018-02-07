#include <stdio.h>
#include <stdlib.h>

int d=0;
void countdigit(int a)
{
    if(a>0)
    {
        a=a/10;
        d++;
        countdigit(a);
    }
    else
        printf(" NO OF DIGITS %d ",d);
}
int main()
{
int n;
printf("ENTER A POSITIVE NO ");
scanf("%d",&n);
if(n>0)
countdigit(n);
    return 0;
}

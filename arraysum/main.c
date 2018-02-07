#include<stdio.h>

int sum=0,j=0;
int sumarray(int [],int);
int main()
 {  int i;
    int array[10];

    printf("ENTER 10 ELEMENTS INTO ARRAY ");
    for( i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("SUM IS %d",sumarray(array,10));
    return 0;
}
int sumarray(int A[],int S)
{   if(j<S)
    {
        sum=sum+A[j];
        j=j+1;
        sumarray(A,S);

    }
    else
        return sum;
}

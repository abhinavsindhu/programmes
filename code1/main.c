#include<stdio.h>
int r=0;
int n1,n2,t,p;
int rem(int ,int );
int main()
{
scanf("%d",&t);
while(t)
{
scanf("%d%d",&n1,n2);

  p=rem(n1,n2);
  printf("%d\n",p);
  t--;
  }
  return 0;
  }
  int rem(int a,int b)
  {
  r=a%b;

  return r;
  }

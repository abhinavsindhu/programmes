#include<stdio.h>
int s=0,r,p,t,n;

int sod(int );
int main()
{
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
  p=sod(n);
  s=0;
  printf("%d\n",p);
  }
  return 0;
  }
  int sod(int a)
  {
  while(a>0)
  {
  r=n%10;
  s=s+r;
  n=n/10;
   }
  return s;
  }

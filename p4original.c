#include <stdio.h>

int input()
{
  int n;
  printf("enter nth value:");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int a=0,b=1,i,c;
  for(i=2;i<n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}

void output(int n, int c)
{
  int a=0,b=1;
    if(n==1)
    printf("the %d element in fibonacci series is %d",n,a);
  else if(n==2)
    printf("the %d element in fibonacci series is %d",n,b);
  else
  printf("the %d element in fibonacci series is %d",n,c);
}

int main()
{
  int n,c;
  n=input();
  c=find_fibo(n);
  output(n,c);
  return 0;
}
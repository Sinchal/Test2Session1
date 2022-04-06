#include<stdio.h>

int input_number()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  int i;  
  for(i=2;i<=n/2;i++)
  {
    if (n%i==0)
     return 1;
  }
  return 0;      
}

void output(int n,int is_prime)
{
  if (is_prime==1)
    printf("%d is not a prime number",n);
  else
    printf("%d is a prime number",n);
}

int main()
{
  int n,ispr;
  n=input_number();
  ispr=is_prime(n);
  output(n,ispr);
}

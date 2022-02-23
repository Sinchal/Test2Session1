#include<stdio.h>

int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  int i, temp = 0;
  if (n == 0 || n == 1)
  temp = 1;
  for (i = 2; i <= n / 2; ++i) 
  if (n % i == 0)
  {
   temp = 1;
   break;
  }
  return temp;
}

void output(int n, int isprime)
{
  if (isprime == 0)
  printf("%d is a prime number.\n", n);
  else
  printf("%d is not a prime number.\n", n);
}

int main()
{
  int n,isprime;
  n=input_number();
  isprime=is_prime(n);
  output(n,isprime);
  return 0;
}
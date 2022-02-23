#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Input x1: ");
	scanf("%f", x1);
	printf("Input y1: ");-
	scanf("%f", y1);
  printf("Input x2: ");
	scanf("%f", x2);
	printf("Input y2: ");
	scanf("%f", y2);
  printf("Input x3: ");
	scanf("%f", x3);
	printf("Input y3: ");
	scanf("%f", y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int istriangle;
  istriangle = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
  return istriangle;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==0)
  printf("no\n");
  else
  printf("yes\n");
}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  int istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}
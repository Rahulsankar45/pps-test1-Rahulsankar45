#include<stdio.h>
int input()
{
  int a;
  printf("enter two numbers\n");
  scanf("%d",&a);
  return a;
}
int add( int a, int b)
{
int k=a+b;
return k;
}
void output(int a, int b, int x)
{
printf("%d +%d =%d\n",a,b,x);
}
int main()
{
  int a=input ();
  int b=input ();
  int x=add (a,b);
  output(a, b, x);
  return 0;
}

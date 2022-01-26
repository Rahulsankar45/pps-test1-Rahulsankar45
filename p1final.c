#include<stdio.h>
int input()
{
  int a;
  printf("enter a numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int g;
  if(a>b & a>c)
  {
    g=a;
  }
  else if(b>c)
  {
    g=b;
  }
  else
  {
    g=c;
  }
  return g;
}
void output(int g)
{
 printf("the greatest number among the three is:%d\n",g);
  
}
int main()
{
  int a,b,c,large;
  printf("enter the three numbers\n");
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  printf("%d is the largest of the three\n",large);
}
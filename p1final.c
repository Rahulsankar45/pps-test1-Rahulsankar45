#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers\n");
  scanf("%d%d",a,b);
}
void add(int a, int b,int *c)
{
  *c=a+b;
}
void output(int a,int b,int c)
{
  printf("%d+%d=%d",a,b,c);

}
int main()
{
int x,y,c;
input(&x,&y);
add(x,y,&c);
output(x,y,c);
}
// 3. write a C program to add two numbers using pass by value

#include <stdio.h>
int input()

{
  int a;
  printf("Enter one number");
  scanf("%d" , &a);
  return a;
}
int add (int a , int b)
{
int c;
c=a+b;
return c;
}
void output (int a , int b, int c)
{
  printf("the sum of %d + %d is %d" , a,b,c);
}
int main()
{
  int a,b,c;
  a = input();
  b = input();
  c = add(a,b);
  output(a,b,c);
  return 0;
}
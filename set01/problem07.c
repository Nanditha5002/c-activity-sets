// write a c program to find the sum of all natural numbers 
#include <stdio.h>
int input_n()
{
  int n;
  printf("enter a positive number:\n");
  scanf("%d" , &n);
  return n;
}
int sum_n_nos(int n)
{ int sum=0;
  for(int i=0;i<=n;i++){
    sum += i;
  }
  return sum;
} 
void output(int n, int sum)
{
  printf("the sum of %d positive numbers is %d:\n" , n,sum);
}
int main()
{
  int n, sum;
  n=input_n();
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
}
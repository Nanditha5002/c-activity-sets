// write a C programm to find largest of 3 numbers  using pass by reference
#include <stdio.h>
void input(int *a, int *b ,int *c)
{
  printf("Enter the number\n");
  scanf("%d%d%d",a,b,c);
}
void compare(int a,int b,int c,int *largest)
{
  if(a>=b && a>=c){
    *largest=a;
  }
  else if(b>=a && b>=c){
    *largest=b;
  }
  else{
    *largest=c;
  }
}
void output(int a ,int b,int c,int largest)
{
  printf("input number are %d,%d and %d\n",a,b,c);
  printf("largest number is %d\n",largest);
}
int main() 
{
  int a,b,c,largest;
  input(&a,&b,&c);
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}
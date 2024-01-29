// 5. write aC programm to compare 3 numbers using pass by value
#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number \n");
  scanf("%d",&n);
  return n;
}
int compare(int a,int b,int c)
{
  if(a>=b && a>=c){
    return a;
  }
  else if (b>=a && b>=c){
    return b;
  }
  else{
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("the largest number among %d,%d and %d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}

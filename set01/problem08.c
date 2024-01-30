// write a c program to find the sum of diff numbers entered by users
#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter a number of elements:\n");
  scanf("%d" ,&n);
  return n;
} 
void input_array(int n, int a[n])
{
printf("Enter %d numbers:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", &a[i]);
 }
}
int sum_n_array(int n, int a[n]) {
 int sum = 0;
 for (int i = 0; i < n; i++) {
 sum += a[i];
 }
 return sum;
}
void output(int n, int a[n], int sum) {
 printf("entered %d numbers: ", n);
 for (int i = 0; i < n; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
 printf("The sum of these numbers is: %d\n", sum);
}
int main() {
 int n;
 n = input_array_size();
 int a[n];
 input_array(n, a);
 int sum = sum_n_array(n,a);
 output(n,a,sum);
 return 0;
}



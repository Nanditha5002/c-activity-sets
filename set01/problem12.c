// write a c program to find the sum of complex numbers
#include<stdio.h>
struct _complex {
 float real,imaginary;
};
 typedef struct _complex Complex; 
int get_n()
{
 int n;
 printf("Enter the number of values: ");
 scanf("%d", &n);
 return n;
}
Complex input_complex()
{
 Complex c;
 printf("Enter the real part: ");
 scanf("%f", &c.real);
 printf("Enter the imaginary part: ");
 scanf("%f", &c.imaginary);
 return c;
}
void input_n_complex(int n, Complex c[n])
{
 for (int i = 0; i < n; i++)
 {
 printf("Complex number %d:\n", i + 1);
 c[i] = input_complex();
 }
}
Complex add(Complex a, Complex b)
{
 Complex result;
 result.real = a.real + b.real;
 result.imaginary = a.imaginary + b.imaginary;
 return result;
}
Complex add_n_complex(int n, Complex c[n]) 
{
 Complex sum = {0, 0};
 for (int i = 0; i < n; i++)
 {
 sum = add(sum, c[i]);
 }
 return sum;
}
void output(int n, Complex c[n], Complex result)
{
 printf("Sum of %d complex numbers:\n", n);
 for (int i=0;i<n;i++)
 {
 printf("(%.2f + %.2fi) ", c[i].real, c[i].imaginary);
 if (i < n - 1) 
 {
 printf("+");
 } else 
 {
 printf("=");
 }
 }
 printf("(%.2f + %.2fi)\n", result.real, result.imaginary);
}
int main()
{
 int n = get_n();
 Complex complex_no[n];
 input_n_complex(n, complex_no);
 Complex sum = add_n_complex(n, complex_no);
 output(n, complex_no,sum);
 return 0;
}
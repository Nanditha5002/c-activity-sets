#include <stdio.h>
struct _complex {
 float real;
 float img;
};
typedef struct _complex Complex;
Complex input_complex() {
 Complex num;
 printf("Enter real and imaginary parts: ");
 scanf("%f %f", &num.real, &num.img);
 return num;
}
Complex add_complex(Complex a, Complex b) {
 Complex sum;
 sum.real = a.real + b.real;
 sum.img = a.img + b.img;
 return sum;
}
void output(Complex a, Complex b, Complex sum) {
 printf("The sum of %.1f+%.1fi and %.1f+%.1fi is %.1f+%.1fi\n",
 a.real, a.img, b.real, b.img, sum.real, sum.img);
}
int main() {
 Complex num1, num2, sum;
 num1 = input_complex();
 num2 = input_complex();
 sum = add_complex(num1, num2);
 output(num1, num2, sum);
 return 0;
}
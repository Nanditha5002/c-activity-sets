// 2. Write a program to find the smallest of three fractions

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;
void input(Fraction *frac) {
    scanf("%d/%d", &frac->num, &frac->den);
}
int compare(Fraction frac1, Fraction frac2) {
    int val1 = frac1.num * frac2.den;
    int val2 = frac2.num * frac1.den;
    if (val1 < val2)
        return -1;
    else if (val1 > val2)
        return 1;
    else
        return 0;
}

void find_smallest(Fraction frac1, Fraction frac2, Fraction frac3, Fraction *smallest) {
    if (compare(frac1, frac2) <= 0 && compare(frac1, frac3) <= 0)
        *smallest = frac1;
    else if (compare(frac2, frac3) <= 0)
        *smallest = frac2;
    else
        *smallest = frac3;
}

void output(Fraction smallest) {
    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
}
int main() {
    Fraction frac1, frac2, frac3, smallest;
    printf("Enter the first fraction (numerator/denominator): ");
    input(&frac1);
    printf("Enter the second fraction (numerator/denominator): ");
    input(&frac2);
    printf("Enter the third fraction (numerator/denominator): ");
    input(&frac3);
    find_smallest(frac1, frac2, frac3, &smallest);
    output(smallest);
    return 0;
}
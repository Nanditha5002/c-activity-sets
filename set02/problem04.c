// 04. Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>
int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}
void input_array(int n, int a[n]) {
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) {
        return 0;
    }

    int factors = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            factors++;
        }
    }

    return factors > 2; 
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
void output(int sum) {
    printf("Sum of composite numbers in the array: %d\n", sum);
}

int main() {
    int size = input_array_size();
    int array[size];
    input_array(size, array);
    int sum = sum_composite_numbers(size, array);
    output(sum);
    return 0;
}

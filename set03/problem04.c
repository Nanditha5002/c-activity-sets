// Write a program to find nth number in fibonacci sequence.

// Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

#include <stdio.h>

int input() {
    int n;
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}

int main() {
    int n, fibo;
    n = input();
    fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}

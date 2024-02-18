// 3. Write a program to check if the given number is prime

#include <stdio.h>

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}


void output(int n, int result) {
    if (result == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}
int main() {
    int num, prime;
    num = input_number();
    prime = is_prime(num);
    output(num, prime);
    return 0;
}


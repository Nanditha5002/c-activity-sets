
// Write a program to find the distance between 2 points


#include <stdio.h>

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    float sum_of_squares = dx * dx + dy * dy;
    float guess = 1.0;
    while (1) {
        float new_guess = 0.5 * (guess + sum_of_squares / guess);       
        if (new_guess - guess < 0.0001 && guess - new_guess < 0.0001) {
            return new_guess;
        }
        guess = new_guess;
    }
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("The distance between point (%.7f, %.7f) and (%.7f, %.7f) is %.4f\n", x1, y1, x2, y2, distance);
}

int main() {
    float x1, y1, x2, y2;
    input(&x1, &y1, &x2, &y2);
    float distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}

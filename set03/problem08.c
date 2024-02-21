// Write a program to find the permeter of a polygon

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;
typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s\nEnter x coordinate: ", prompt_msg);
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);
    return p;
}

int input_polygon(Polygon *p) {
    printf("Enter the coordinates of the vertices:\n");
    for (int i = 0; i < p->sides; ++i) {
        p->p[i] = input_point("");
    }
    return 0;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon* p) {
    float perimeter = 0.0;
    for (int i = 0; i < p->sides; ++i) {
        perimeter += find_distance(p->p[i], p->p[(i + 1) % p->sides]);
    }
    p->perimeter = perimeter;
}

void output(Polygon p) {
    printf("Perimeter of the polygon: %.2f\n", p.perimeter);
}

int main() {
    Polygon poly;
    poly.sides = input_n();
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}

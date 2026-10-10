#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float result = ((a - b) * (i / j)) - (x + y);
    printf("Result: %.3f\n", result);

    return 0;
}
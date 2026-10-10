#include <stdio.h>

int main() {
    float radius, height;
    float volume, area, around;
    float pi = 22.0/7.0;

    scanf("%f %f", &radius, &height);

    volume = pi * radius * radius * height;
    area = 2 * pi * radius * (radius + height);
    around = 2 * pi * radius;

    printf("Volume = %.2f\n", volume);
    printf("Luas permukaan = %.2f\n", area);
    printf("Keliling alas = %.2f\n", around);

    return 0;
}
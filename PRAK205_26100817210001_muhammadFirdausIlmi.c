#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, around, area;

    scanf("%d %d", &A, &B);

    C = sqrt(B * B - A * A);
    around = A + B + C;
    area = 0.5 * A * C;

    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", around);
    printf("Luas = %d cm^2\n", area);

    return 0;
}
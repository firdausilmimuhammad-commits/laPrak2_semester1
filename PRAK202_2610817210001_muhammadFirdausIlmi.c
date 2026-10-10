#include  <stdio.h>

int main(){
    float firstNumber, secondNumber, result;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &firstNumber);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &secondNumber);
    result = firstNumber + secondNumber;
    printf("Hasil Penjumlahan: %.2f\n", result);
    return 0;
}
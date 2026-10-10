#include <stdio.h>

int main() {
    char name[50];
    long long nim;
    int paralelClass;
    char placeofBirth[50];
    int dateofBirth;
    int monthofBirth;
    int yearofBirth;
    char address[50];
    char hobby[50];
    long long phoneNumber;
    
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", name);
    
    printf("Masukkan NIM: ");
    scanf("%lld", &nim);
    
    printf("Masukkan Kelas Paralel: ");
    scanf("%d", &paralelClass);
    
    printf("Masukkan Tempat Lahir: ");
    scanf(" %[^\n]", placeofBirth);
    
    printf("Masukkan Tanggal Lahir : ");
    scanf("%d", &dateofBirth);
    
    printf("Masukkan Bulan Lahir : ");
    scanf("%d", &monthofBirth);

    printf("Masukkan Tahun Lahir : ");
    scanf("%d", &yearofBirth);
    
    printf("Masukkan Alamat: ");
    scanf(" %[^\n]", address);
    
    printf("Masukkan Hobi: ");
    scanf(" %[^\n]", hobby);
    
    printf("Masukkan Nomor Telepon: ");
    scanf("%lld", &phoneNumber);

    printf("\n");
    printf("Nama                        : %s\n", name);
    printf("NIM                         : %lld\n", nim);
    printf("Kelas                       : %d\n", paralelClass);
    printf("Tempat/Tanggal Lahir        : %s, %d-%d-%d\n", placeofBirth, dateofBirth, monthofBirth, yearofBirth);
    printf("Alamat                      : %s\n", address);
    printf("Hobi                        : %s\n", hobby);
    printf("No. HP                      : %lld\n", phoneNumber);

    return 0;
}
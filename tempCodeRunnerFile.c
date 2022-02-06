#include<stdio.h>
#include<string.h>

typedef char[100];

typedef struct{
    string dd;
    string mm;
    string hh;
}lahir;

typedef struct{
    string nama;
    string NIK;
    Lahir L;
    string jenis_kelamin;
    string alamat;
}data_pasien;

Pasien InputDataPasien (Pasien P) {
    printf(" INPUT DATA PASIEN  \n");
    printf("Rumah Sakit Bangkit Bersama\n");
    printf("——————————–\n");
    printf(" Nama : "); scanf("%[^\n]", &P.Nama);
    printf(" NIK : "); scanf("%s", &P.NIK);
    printf(" Tanggal Lahir (Contoh: DD MM YYYY) \n");
    printf(" : ");scanf("%s%s%s", &P.L.Tanggal, &P.L.Bulan, &P.L.Tahun);
    printf(" Jenis Kelamin");scanf("%s", &P.jenis_kelamin);
    printf(" alamat : "); scanf("%s", &P.alamat);
    printf("\n\n\n");
return M;
}

void TampilkanDataPasien (Pasien P) {
    printf(" DATA PASIEN \n");
    printf(" Rumah Sakit Bangkit Bersama\n");
    printf("——————————–\n");
    printf(" Nama : %s\n ", P.Nama);
    printf("NIK : %s\n ", P.NIK);
    printf("Tangal Lahir : %s - %s - %s \n", P.L.Tanggal, P.L.Bulan, P.L.Tahun);
    printf(" Jenis Kelmamin : %s\n ", P.jenis_kelamin);
    printf(" alamat : %s\n", P.alamat);
    printf("\n\n");
}

int main() {
Pasien P;

P=InputDataPasien(P);
TampilkanDataPasien(P);

return 0;
}
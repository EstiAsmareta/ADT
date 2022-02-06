/*NPM : G1A021042*/

#include<stdio.h> /*pertama menambahkan library untuk input/output data*/

/*Membuat data tanggal lahir asien dengan menggunakan syntax tyedef yang mana merupakan kode dalam data ADT dan syntax character. data ini diberi nama lahir */
typedef struct{
    char dd[2];
    char mm[2];
    char hh[4];
}lahir;

/*Membuat data diri pasien dengan menggunakan syntax typedef dan syntax character. data ini diberi nama pasien*/
typedef struct{
    char nama[100];
    char NIK[20];
    lahir L;
    char jenis_kelamin[10];
    char alamat[100];
}pasien;

/*Membuat perintah untuk melakukan inputan data diri pasien dari pengguna sesuai dengan data pada data pasien dan data lahir*/
pasien InputDataPasien (pasien P) {
    printf(" INPUT DATA PASIEN  \n");
    printf("Rumah Sakit Bangkit Bersama\n");
    printf("——————————–\n");
    printf(" Nama : "); scanf("%[^\n]", &P.nama); /*Digunakan fungsi scanf untuk mengambil input dari keyboard dengan format scanf("%[^\n]" guna mengambil karakter hingga baris baru ditemukan. &P.nama digunakan untuk memanggil format data diri pasien (nama) pada syntax typedef*/
    printf(" NIK : "); scanf("%s", &P.NIK); /*Digunakan fungsi scanf untuk mengambil input dari keyboard dengan format scanf("%s" dimana mengeksekusi/mengambil karakter pertama saja.*/
    printf(" Tanggal Lahir (Contoh: DD MM YYYY) \n");
    printf(" : ");scanf("%s-%s-%s", &P.L.dd, &P.L.mm, P.L.hh); /*&P.L.dd, %P.L.mm, &P.L.hh digunakan untuk memanggil data diri pasien (lahir L) dan memanggil typedef struct lahir secara bersama.*/
    printf(" Jenis Kelamin : ");scanf("%s", &P.jenis_kelamin);
    printf(" Alamat : "); scanf("%[^\n]", &P.alamat);
    printf("\n\n\n");
return P; /*digunakan fungsi return P untuk kembalikan nilai yang tersimpan di dalam variabel input data pasien kepada kode yang akan memanggil fungsi tersebut*/

}

/*Membuat perintah untuk menampilkan data pasien yang telah diinputkn oleh pengguna*/
void TampilkanDataPasien (pasien P) {
    printf(" DATA PASIEN \n");
    printf(" Rumah Sakit Bangkit Bersama\n");
    printf("——————————–\n");
    printf(" Nama : %s\n ", P.nama);
    printf("NIK : %s\n ", P.NIK);
    printf("Tangal Lahir : %s-%s-%s\n ", P.L.dd, P.L.mm, P.L.hh);
    printf(" Jenis Kelmamin : %s\n ", P.jenis_kelamin);
    printf(" Alamat : %s\n ", P.alamat);
    printf("\n\n");
}

int main() {
pasien P;

P=InputDataPasien(P);
TampilkanDataPasien(P);

return 0;
}

#include <stdio.h>
int main(){
char almt [50];
char bulan1[20];
char kls [2];
char nama [50];
char nim [10];
char no [12];
int tanggal, bulan, tahun, umur;
int hariSelisih, hari1, hari2, hari, umurBulan, umurTahun;
printf("Nama : ");
fgets(nama, sizeof(nama), stdin);
printf("NIM : ");
scanf("%s", &nim);
printf("Kelas : ");
scanf("%s", &kls);
printf("Alamat : ");
fflush(stdin);
fgets(almt, sizeof(almt), stdin);
printf("No HP : ");
scanf("%s", &no);
printf("Tanggal Lahir :");
scanf("%d %s %d", &tanggal, &bulan1, &tahun);
hari1=tanggal + bulan*31 + tahun*365;
hari2=16 + 2*31 + 2021*365;
hariSelisih=hari2-hari1;
umurTahun=hariSelisih/365;
printf("\n\n********Terimakasih Telah Mendaftar!********\n\n");
printf("Nama : %s",nama);
printf("NIM : %s\n",nim);
printf("Kelas : %s\n",kls);
printf("Alamat : %s\n",almt);
printf("No HP : %s",no);
//puts(&No);
printf("\nTanggal lahir : %d %s %d", tanggal, bulan1, tahun);
printf("\nUmur : %d", umurTahun);
return 0;
}

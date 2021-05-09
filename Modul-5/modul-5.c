#include<stdio.h>
#include <stdlib.h>

struct data{
char movie[100];
float rate;
}x[100];

int main(){
	printf("           PRAKTIKUM MODUL 5\n");
	printf("             OPERASI FILE\n");
	printf("========================================\n");
	printf("Nama  : I Gusti Bgs Darmika Putra\n");
	printf("NIM   : 2008561094\n");
	printf("Kelas : E\n");
	printf("========================================\n");
	printf("Data sebelum di urutkan : \n");
struct data temp;
FILE *fpm; //pointer untuk file movie.txt
FILE *fasc; //pointer untuk file ascending.txt
FILE *fdsc; //pointer untuk file descending.txt
int i = 0, size, j,mode;
char ch;

fpm= fopen("movie.txt", "r");
if (fpm == NULL) 
{
printf("\n Cannot open the file \n");
exit(0);
}

while (ch != EOF) {
fscanf(fpm, "%s %f", &x[i].movie, &x[i].rate); 
printf("%s %.1f\n", x[i].movie, x[i].rate);
ch = fgetc(fpm);
i++;//untuk mengulang terus hinggan EOF dan mengetahui size of fp atau ch
}

size = i - 1;
//bubble sort ascending
for (i = 1; i < size; ++i)
for (j = 0; j < size - i; j++)
if (x[j + 1].rate < x[j].rate)
{
temp = x[j];
x[j] = x[j + 1];
x[j + 1] = temp;
}
//hasil meggunakan ascending
printf("========================================\n");
fasc = fopen("ascending.txt", "w"); 
puts("Data sesudah di urutkan dengan Ascending:");
for (i = 0; i < size; i++){
printf("%s %.1f \n", x[i].movie, x[i].rate);
fprintf(fasc, "%s %.1f \n", x[i].movie, x[i].rate);
}printf("========================================\n");

//bubble sort descending
for (i = 1; i < size; ++i)
for (j = 0; j < size - i; j++)
if (x[j + 1].rate > x[j].rate)
{
temp = x[j];
x[j] = x[j + 1];
x[j + 1] = temp;
}
//hasil meggunakan descending
fdsc = fopen("descending.txt", "w");
puts("Data sesudah di urutkan dengan Descending:");
for (i = 0; i < size; i++)
{
printf("%s %.1f \n", x[i].movie, x[i].rate);
fprintf(fdsc, "%s %.1f \n", x[i].movie, x[i].rate);
}printf("========================================\n\n");

fclose(fpm);//untuk close file movie
fclose(fasc);//untuk close file ascending
fclose(fdsc);//untuk close file descending
return 0;
}

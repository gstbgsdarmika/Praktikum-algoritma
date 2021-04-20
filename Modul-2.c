#include <stdio.h>
#include <string.h>
int main(){
	char data[100];
	printf("         Tugas Praktikum Modul 2\n");
    printf("  Program Memeriksa Bilangan Palindrom \n");
	printf("-------------------------------------\n");
	printf("Nama  : I Gusti Bgs Darmika Putra\n");
	printf("NIM   : 2008561094\n");
	printf("Kelas : E\n");
	printf("-------------------------------------\n");
	printf("Masukan Bilangan Yang Ingin Dicek :");
	scanf("%s",data);
	int p_data = strlen(data)-1;

int i = 0;
while(i<p_data){
	if(data[i++] != data[p_data--]){
		printf("Bilangan %s merupakan bilangan bukan palindrom",data);
		return 1;
		}
	}
 	printf("Bilangan %s merupakan bilangan palindrom",data);
 	return 0;
}
	


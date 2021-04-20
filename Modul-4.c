#include<stdio.h>
#include<string.h>
int cek(char masukan[],int awal,int akhir){
	while(awal-akhir<=0){
		if(masukan[awal]==masukan[akhir]){
			awal++;
			akhir--;
			return 1;
		}
		else{
			return 0;
			break;
		}
	}
}

int main(){
	char masukan[100];
	printf("            PRAKTIKUM MODUL 4\n");
	printf("          POINTER DAN FUNGSI\n");
	printf("========================================\n");
	printf("Nama  : I Gusti Bgs Darmika Putra\n");
	printf("NIM   : 2008561094\n");
	printf("Kelas : E\n");
	printf("========================================\n");
	printf("Masukan Kalimat : ");
	scanf("%[^\n]",&masukan);
	int awal=0;
	int akhir=strlen(masukan) - 1;
	int kesimpulan = cek(masukan,awal,akhir);
	if(kesimpulan==1){
		printf("==> %s : Palindrom",masukan);
	}
	else{
		printf("==> %s : Bukan Palindrom",masukan);
	}
	return 0;
}

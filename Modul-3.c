#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int top = -1;
void push(int);
int pop();
void display();

main(){
	int pilih,num;
	printf("         Tugas Praktikum Modul 3\n");
	printf("   Program Stack Menggunakan Array\n");
	printf("-------------------------------------\n");
	printf("Nama  : I Gusti Bgs Darmika Putra\n");
	printf("NIM   : 2008561094\n");
	printf("Kelas : E\n");
	printf("-------------------------------------\n");
	while(1){

printf("Menu Program : \n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Keluar\n");
printf("Masukan Pilihan Anda : ");
scanf("%d",&pilih);

switch (pilih){
	case 1:
		printf("Masukan nilai yang ingin dimasukan : ");
		scanf("%d",&num);
		push(num);
		break;
	case 2:
		num = pop();
		break;
	case 3:
		display();
		break;
  	case 4:
        exit(1);    
        default:
        printf("Mohon Maaf Pilihan Anda Salah \n");
        printf("-------------------------------------\n");
        } 
	}
}

void push(int element){       
	if (top == MAX-1){			 // jika stack penuh maka perintah ini akan dijalankan
		printf("Stack Penuh!\n");
		printf("---------------------------------------------\n");
		return 0;
	}
	top = top+1;				// jika stack tidak penuh maka perintah ini akan dijalankan
	stack[top] = element;
}

int pop(){
	int element;
	if (top == -1){				// jika stack kosong maka perintah ini akan dijalankan
		printf("Stack Kosong!\n");
		printf("---------------------------------------------\n");
		return 0;
	}
	 element = stack[top];
	 top = top-1;				// jika stack tidak kosong maka perintah ini akan dijalankan,dan stack-1 
	 printf("---------------------------------------------\n");
	 printf("Element %d Akan Dihapus",element);
	 printf("---------------------------------------------\n");
	 return element;
}

void display(){
		int i;				
		if (top == -1){			// jika stack kosong maka perintah ini akan dijalankan
		printf("Stack Kosong!\n");
		printf("---------------------------------------------\n");
		return ;
	}
	printf("\nElement Yang Berada Di Stack :");
	for(i=top; i>=0; i--)		// jika stack tidak kosong maka program akan menampilkan element yang ada di stack
	printf("%d ",stack[i]);
}

#include<stdio.h>
#include<stdlib.h>
struct book{
	int id;
	char name[50];
	char author[50];
	float price;
	char category[50];
};
struct book books[100];
int main(){
	struct book copy[100];
	FILE* txt;
	txt=fopen("E:\\Code C\\Ss16\\BT7\\BT07.txt", "w+");
	int n;
	do{
		printf("********************MENU*********************\n");
		printf("1. Nhap so luong va thong tin sach\n");
		printf("2. Luu thong tin sach vao file\n");
		printf("3. Hien thi thong tin sach tu file\n");
		printf("4. Thoat\n");
		printf("Chon chuc nang:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong sach:");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("id: %d\n",i);
					printf("name: ");
					scanf("%s",books[i].name);
					printf("tac gia: ");
					scanf("%s",books[i].author);
					printf("gia: ");
					scanf("%f",books[i].price);
					printf("the loai: ");
					scanf("%s",books[i].category);
				}
				break;
			case 2:
				for(int i=0;i<n;i++){
					fprintf(txt, "id: %d\n",i);
					fprintf(txt, "ten sach: %s\n", books[i].name);
					fprintf(txt, "tac gia: %s\n", books[i].author);
					fprintf(txt, "gia: %f\n", books[i].price);
					fprintf(txt, "the loai: %s\n", books[i].category);
				}
				fclose(txt);
				printf("Da luu thong tin sach vao file txt\n");
				break;
			case 3:
				fread(copy, sizeof(char), sizeof(copy),txt);
				printf("%s\n",copy);
				break;
			case 4:
			    exit(0);
			default:
				printf("Gia tri khong phu hop\n");
		}
	}while(1==1);
}

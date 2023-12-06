#include<stdio.h>
struct student{
	char name[50];
	int age;
	char phone[20];
	char email[40];
};
struct student students[100];
int main(){
	FILE* f;
	f=fopen("E:\\Code C\\Ss16\\BT6\\student.txt","w+");
	int n;
	printf("Nhap so luong sinh vien:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fprintf(f,"Sinh vien %d:\n",i);
		printf("name: ");
		scanf("%s",&students[i].name);
		fprintf(f, "ho va ten: %s\n", students[i].name);
		printf("age: ");
		scanf("%d",&students[i].age);
		fprintf(f, "tuoi: %s\n", students[i].age);
		printf("phone: ");
		scanf("%s",&students[i].phone);
		fprintf(f, "sdt: %s\n", students[i].phone);
		printf("email: ");
		scanf("%s",&students[i].email);
		fprintf(f, "email: %s\n", students[i].email);
	}
	fclose(f);
}

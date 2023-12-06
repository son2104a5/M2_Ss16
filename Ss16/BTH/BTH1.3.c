#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	int tuoi;
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\text.txt", "w");
	if(taptin!=NULL){
		printf("Ban bao nhieu tuoi ?\n");
		scanf("%d",&tuoi);
		fprintf(taptin,"Nguoi dung chiec may tinh nay %d tuoi",tuoi);
		fclose(taptin);
	}
}

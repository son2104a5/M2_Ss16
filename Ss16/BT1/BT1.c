#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	char chuoi[1000];
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\BT01.txt", "w+");
	if(taptin!=NULL){
		fgets(chuoi,sizeof(chuoi),stdin);
		fprintf(taptin,"%s",chuoi);
		fclose(taptin);
	}
}

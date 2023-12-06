#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	char chuoi[1000];
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\BT03.txt", "r");
	if(taptin!=NULL){
		fread(chuoi,sizeof(char),sizeof(chuoi),taptin);
		printf("%s",chuoi);
		fclose(taptin);
	}
}

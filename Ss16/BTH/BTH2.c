#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	int kytuhientai=0;
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\text.txt", "r");
	if(taptin!=NULL){
		do{
			kytuhientai=fgetc(taptin);
			printf("%c",kytuhientai);
		}while(kytuhientai!=EOF);
		fclose(taptin);
	}
}

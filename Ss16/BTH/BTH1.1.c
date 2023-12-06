#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\text.txt", "w");
	if(taptin!=NULL){
		fputc('A', taptin);
		fclose(taptin);
	}
}

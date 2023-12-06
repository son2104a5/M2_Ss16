#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\text.txt", "w");
	if(taptin!=NULL){
		fputs("Xin chao anh chang dep trai\nBan co khoe khong ?", taptin);
		fclose(taptin);
	}
}

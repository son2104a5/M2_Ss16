#include<stdio.h>
int main(){
	char copy[100];
	FILE *taptin1, *taptin2, *taptin3;
	taptin1=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\BT01.txt", "r");
	taptin2=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\BT03.txt", "r");
	taptin3=fopen("BT05.txt", "w+");
	int n=2;
		for(int i=1;i<=n;i++){
			if(i==1){
				fread(copy, sizeof(char), sizeof(copy), taptin1);
		        fprintf(taptin3,"%s\n",copy);
		        fclose(taptin1);
			}
			if(i==2){
				fread(copy, sizeof(char), sizeof(copy), taptin2);
				fprintf(taptin3,"%s\n",copy);
		        fclose(taptin2);
			}
		}
		fclose(taptin3);
}

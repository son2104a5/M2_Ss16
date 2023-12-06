#include<stdio.h>
int main(){
	int n;
	FILE* taptin = NULL;
	char chuoi[1000];
	taptin=fopen("C:\\Users\\HONG NHUNG\\OneDrive\\Desktop\\BT03.txt", "w");
	printf("Nhap so dong:");
	scanf("%d",&n);
	if(taptin!=NULL){
		for(int i=0;i<n;i++){
		    scanf("%s",chuoi);
		    fprintf(taptin,"%s\n",chuoi);
	    }
		fclose(taptin);
	}
}

#include<stdio.h>

int main(){
	
	int number[5];
	int i;
	
	printf("Nhap 5 phan tu so nguyen:\n");
	for(i=0;i<5;i++){
		printf("Nhap phan tu thu %d:",i+1);
		scanf("%d",&number[i]);
	}
	printf("Mang da nhap la:\n");
	for(i=0;i<5;i++){
		printf("%d\n",number[i]);
	}
	return 0;
}

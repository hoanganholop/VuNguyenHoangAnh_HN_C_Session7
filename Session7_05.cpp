#include<stdio.h>

int main(){
	
	int number[5]={1,23,54,75,108};
	int max, min;
	max=number[0];
	min=number[0];
	for(int i=1; i<5;i++){
		if(number[i]>max){
			max=number[i];
		}
		if(number[i]<min){
			min=number[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n",max);
	printf("Phan tu nho nhat trong mang la: %d",min);
	return 0;
}

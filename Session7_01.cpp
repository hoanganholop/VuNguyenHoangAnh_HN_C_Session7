#include<stdio.h>

int main (){
	int numbers[8]={1,2,3,4,5,6,7,8};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	for(int i=0; i<size;i++){
		printf("%d\n",numbers[i]);
	}
	printf("Do dai cua mang la: %d",size);
	return 0;
}

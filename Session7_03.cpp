#include<stdio.h>

int main (){
	int numbers[5]={1,2,3,4,5};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int sochan;
	
	for(int i=0; i<size;i++){
		if(numbers[i]%2==0){
			printf("%d\n",numbers[i]);
			sochan++;
		}
	}
	if(sochan==0){
			printf("Mang khong chua so chan\n");
		}
	return 0;
}

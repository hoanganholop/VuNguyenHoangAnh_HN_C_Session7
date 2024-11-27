#include<stdio.h>

int main(){
	
	int arr[5]={1,36,86,72,108};
	int i;
	for(i=0; i<5; i++){
		if(arr[i]%2==0){
			arr[i]+=3;
		}else{
		    arr[i]+=2;
		}
	}
	printf("Mang moi la:\n");
	for(i=0; i<5; i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}

#include<stdio.h>

int main(){
	int numbers[5];
	for(int i=0;i<5;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&numbers[i]);
		if(numbers[i]%2==0){
			printf("yeu cau nhap lai!!!\n");
			i--;
		}
	}
	return 0;
}

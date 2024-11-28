#include<stdio.h>

int main(){
	int numbers[5];
	for(int i=0;i<5;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	int max=numbers[1];
	for(int i=0;i<5;i++){
		if(max<numbers[i]){
			max=numbers[i];
		}
	}
	int min=numbers[1];
	for(int i=0;i<5;i++){
		if(min>numbers[i]){
			min=numbers[i];
		}
	}
	printf("max la: %d\n",max);
	printf("min la: %d\n", min);
	
	return 0;
}

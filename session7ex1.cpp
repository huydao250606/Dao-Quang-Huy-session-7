#include<stdio.h>

int main(){
	int numbers[5]={6,7,8,9,10};
	for(int i=0;i<5;i++){
		printf("%d\n", numbers[i]);
	}
	printf("do dai cua mang la %d",  sizeof(numbers)/ sizeof(int));
	return 0;
}

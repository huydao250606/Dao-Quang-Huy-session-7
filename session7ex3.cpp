#include<stdio.h>

int main(){
	int numbers[5];
	int a=0;
	for(int i=0;i<5;i++){
		printf("nhap so thu %d: ", i+1);
		scanf("%d",&numbers[i]);
	}
	for(int i=0;i<5;i++){
		if(numbers[i] % 2==0){
			printf("%d\n",numbers[i]);
			a++;
		}
	}
	if(a==0){
		printf("mang khong co so chan");
	}
	
	return 0;
}

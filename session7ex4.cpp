#include<stdio.h>

int main(){
	int a;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&a);
	int numbers[a];
	for(int i=0;i<a;i++ ){
		printf(" nhap phan tu thu %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	return 0;
}

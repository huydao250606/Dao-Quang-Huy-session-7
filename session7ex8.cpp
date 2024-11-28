#include<stdio.h>

int main(){
	int cot;
	int hang;
	printf("nhap so hang: ");
	scanf("%d",&hang);
	printf("nhap so cot: ");
	scanf("%d",&cot);
	int arr[hang][cot];
	for(int i=0;i<hang;i++){
		for(int a=0;a<cot;a++){
			printf("nhap phan tu [%d][%d]: ",i+1,a+1);
			scanf("%d",&arr[i][a]);
		}
	}
	printf("ma tran vua nhap la: \n");
	for(int i=0;i<hang;i++){
		for(int a=0;a<cot;a++){
			printf("%3d",arr[i][a]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
#define max 100

int array[max][max];
void MakeArray(int m,int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
}
void PrintArray(int m, int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
void PrintArrayBien(int m, int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			if (i==0 || j==0 || i==m-1 || j==n-1){
				printf("%d ", array[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
void PrintArrayGoc(int m, int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			if (i==0 && j==0||i==m-1 &&j==n-1||i==0 && j==n-1||i==m-1 && j ==0){
				printf("%d ", array[i][j]);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
}
void PrintArrayCheo(int m, int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			if (i==j || i+j==n-1){
				printf("%d ", array[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
int IsNumPrime(int Num){
	if (Num < 2) return 0;
	for (int i = 2; i*i <= Num;i++){
		if (Num % i == 0) return 0;
	}
	return 1;
}
void PrintPrime(int m,int n){
	for (int i = 0;i<m;i++){
		for (int j = 0;j<n;j++){
			if (IsNumPrime(array[i][j])){
				printf("%d ", array[i][j]);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
}

int main(){
	int n,m,choice;
	printf("Nhap vao gia tri m : ");
	scanf("%d",&m);
	printf("Nhap vao gia tri n : ");
	scanf("%d",&n);
	while (1){
		printf("=====MENU=====\n");
		printf("1. Nhap  gia tri phan tu cho mang.\n");
		printf("2. In ra gia tri cac phan tu trong mang.\n");
		printf("3. In ra cac phan tu o goc.\n");
		printf("4. In ra cac phan tu o bien.\n");
		printf("5. In ra cac phan tu o cheo chinh va cheo phu .\n");
		printf("6. In ra cac phan tu la so nguyen to.\n");
		printf("7. Thoat\n");
		printf("Nhap lua chon : ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				MakeArray(m,n);
				break;
			case 2:
				PrintArray(m,n);
				break;
			case 3:
				PrintArrayGoc(m,n);
				break;
			case 4:
				PrintArrayBien(m,n);
				break;
			case 5:
				PrintArrayCheo(m,n);
				break;
			case 6:
				PrintPrime(m,n);
				break;
			case 7:
				break;
			default:
				printf("Try again\n");
				break;
		}
		if (choice ==7){
		printf("Thoat chuong trinh\n");
		break;
	}
}
	return 0;
}




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
int main(){
	int m,n;
	printf("Nhap so hang cho matrix : ");
	scanf("%d",&m);
	printf("Nhap so cot cho matrix : ");
	scanf("%d",&n);

	MakeArray(m,n);
	PrintArray(m,n);
	return 0;
}

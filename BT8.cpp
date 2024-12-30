#include <stdio.h>
// giai thuat Euclid
int UocChungMax(int a,int b){
	while (a!=b){
		if (a>b){
			a=a-b;
		} else if (a<b){
			b= b-a;
		}
	}
	return a;
}
int main(){
	int a,b,ucln;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	ucln = UocChungMax(a,b);
	printf("UCLN la %d\n",ucln);
	return 0;
}

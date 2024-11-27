#include <stdio.h>

int main(){
	
	int num[5];
	printf("nhap 5 so nguyen");
	for (int i = 0; i < 5; i++){
		scanf("%d", &num[i]);	
	}
	printf("phan tu trong cac mang la ");
	for (int i =0; i<5; i++){
		printf("%d\n", num[i]);
	}
	
	return 0;
}

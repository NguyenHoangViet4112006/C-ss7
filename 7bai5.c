#include<stdio.h>

int main(){
			
	int num[5]={4, 7, 122, 9, 88};
	int max=num[0];
	for (int i=0; i<5; i++){		
		if(num[i]>max){
			max=num[i];
		}
	}
	printf("so lon nhat la %d\n",max);
	
	
	return 0;
}

	
	

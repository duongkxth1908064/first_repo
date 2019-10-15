// Nhap vao 1 mang 10 so. Tim gia tri trung binh

#include <stdio.h>

int main(){
	
	int a[10];
	
	for (int i=0;i<10;i++){
		
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);	
	}
	
	int s;
	for(int i=0;i<10;i++){
		s+=a[i];
	}
	printf("gia tri trung binh = %f\n",(float)s/10);
	
	return 0;
	
}

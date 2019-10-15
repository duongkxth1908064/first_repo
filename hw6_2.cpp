//Nhap vao 1 mang 20 so, in ra cac so le trong mang


#include <stdio.h>

int main(){
	
	int a[10];
	
	for (int i=0;i<20;i++){
		
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);	
	}
	
	printf("cac so le trong mang\n");
	
	for(int i=0;i<20;i++){
		if (a[i]%2!=0){
			printf("%d\n",a[i]);
		};
	}
	
	return 0;
	
}


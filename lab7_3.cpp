//trung binh cong so le o vi tri chan trong mang n so

#include <stdio.h>

int main(){
	
	int n;
	
	printf("nhap n : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (int i=0;i<n;i++){
		
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for (int i=0;i<n;i++){
		
		if (a[i]<0){
			a[i]=0;
		}
		
	}
	
	
	for(int i=0;i<n;i++){
	   printf("%d ",a[i]);
	}
	
	
	return 0;
}

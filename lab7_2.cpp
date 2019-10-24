//trung binh cong so le o vi tri chan trong mang n so

#include <stdio.h>

int main(){
	
	int n;
	
	printf("nhap n : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (int i=0;i<n;i++){
		
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	
	int count=0,s=0;
	for (int i=0;i<n;i+=2){
		
		if (a[i]%2!=0){
			s+=a[i];
			count++;
		}
		
	}
	
	printf("trung binh cong cac so le o vi tri chan trong mang: %f",(float)s/count);
	
	
	return 0;
}

//trung binh cong so le trong mang n so

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
	
	int count=0,s=0;
	for (int i=0;i<n;i++){
		
		if (a[i]%2!=0){
			s+=a[i];
			count++;
		}
		
	}
	
	printf("trung binh cong cac so le trong mang: %f",(float)s/count);
	
	
	return 0;
}

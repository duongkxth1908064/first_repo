//nhap 1 so nguyen n, tim va in ra so le<n

#include <stdio.h>

int main(){
	
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	for(int i=1;i<n;i+=2){
		printf("%d ",i);
	}
	
	
	return 0;
}


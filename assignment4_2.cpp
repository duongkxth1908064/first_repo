#include <stdio.h>

int main(){
	int n;
	printf("nhap n: \n");
	scanf("%d",&n);
	printf("cac so <n chia het cho 3:\n");
	for (int i=0;i<n;i++){
		
		if(i%3==0){
			printf("%d ",i);
		}
		
	}
	
	return 0;
}

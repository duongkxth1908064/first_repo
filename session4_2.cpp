#include <stdio.h>

int main(){
	
	int x=0;
	
//	while(x>0){
//		printf("day laf print trong while\n");
//	}
//	
	do {
		printf("nhap x = ");
		scanf("%d",&x);
	} while(x%2!=0);
	
	return 0;
}

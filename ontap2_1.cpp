//tinh S = 1 + 1/2 + 1/3 + Åc + 1/N

#include <stdio.h>

int main(){
	
	int n;
	float s=0;
	printf("nhap n: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		s=s+(float)1/i;
	}
	
	printf("s = %f",s);
	
	
	return 0;
}

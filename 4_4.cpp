//nhap n, tim so fibonacci gan n nhat <n

#include <stdio.h>

int main(){
	
	int x=0;
	int y=1;
	int temp;
	int n;
	
	printf("nhap n: ");
	scanf("%d",&n);
	
	
	for (int i=1;y<=n;i++){
		temp=x;
		x=y;
		y=temp+y;
	}
	
	printf("so can tim: %d",x);
	
	
	return 0;
}

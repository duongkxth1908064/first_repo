//tinh n! biet n! = 1.2.3.4�cn

#include <stdio.h>

int main(){
	
	int n,s=1;
	printf("nhap n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		s=s*i;
	}
	
	printf("n! = %d",s);
	
	return 0;
}

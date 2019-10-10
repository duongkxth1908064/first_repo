#include <stdio.h>

int main(){

	int a;
	scanf("%d",&a);
	
	int t=0;
	
	while (a!=0){
		t=t*10+a%10;
		a=a/10;
	}
	
	printf("%d",t);
	
	return 0;
}



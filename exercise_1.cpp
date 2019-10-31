#include <stdio.h>

int main(){

	int x0=1;
	int x1=1;
	int x2=2;

	printf("Fibonacci series between 1 and 100:\n");
	for(int i=0;x2<100;i++){

		printf("%d ",x2);
		x0=x1;
		x1=x2;
		x2=x0+x1;
		
	}

	return 0;
}

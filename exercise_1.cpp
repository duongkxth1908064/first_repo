#include <stdio.h>

int main(){

	int x0=0;
	int x1=1;
	int x2=1;

	printf("Fibonacci series between 1 and 100:\n");
	for(int i=0;x2<89;i++){

		x0=x1;
		x1=x2;
		x2=x0+x1;
		printf("%d ",x2);
		
	}

	return 0;
}

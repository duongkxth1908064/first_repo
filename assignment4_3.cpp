//fibonacci 0, 1, 1, 2, 3, 5, 8.....

#include <stdio.h>

int main(){
	int x=0;
	int y=1;
	int temp;
	
	for (int i=1;i<20;i++){
		temp=x;
		x=y;
		y=temp+y;
	}
	
	printf("so thu 20 trong day fibonacci: %d",x);
	
	return 0;
}

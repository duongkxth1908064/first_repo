#include <stdio.h>
int main(){
	int t = 1000;
	int y = 0;
	int l=0;
	
	while (y<30){
		
		l=t*10/100;
		t=t+l;
		y=y+1;
		
	}
	
	printf("T = %d\n",t);
	
	return 0;
	
}

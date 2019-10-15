// Tinh tong 100 so le > 0 dau tien

#include <stdio.h>

int main(){
	int s=0;
	for (int count=0,i=1;count<100;count++,i+=2){
		s+=i;
	}
	
	printf("tong = %d",s);
	
	return 0;
}

// Tinh tong 100 so le > 0 dau tien

#include <stdio.h>

int main(){
	int i=1;
	int s=0;
	for (int count=1;count<=100;i+=2){
		s=s+i;
		count++;
	}
	
	printf("tong = %d",s);
	
	return 0;
}

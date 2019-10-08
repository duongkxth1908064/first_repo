//nhap vao 1 so, kiem tra xem am hay duong

#include <stdio.h>

int main(){
	
	int a;
	
	printf("nhap so: ");
	scanf("%d",&a);
	
	if (a>0) {
	    printf("a la so duong");
	} else if (a=0) {
		printf("a bang 0");
	} else {
		printf("a la so am");
	}
	
	return 0;
}

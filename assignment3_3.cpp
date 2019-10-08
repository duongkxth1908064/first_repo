//nhap vao x, y, doi cho 2 bien

#include <stdio.h>
int main(){

    int x,y;

	printf("nhap x: ");
	scanf("%d",&x);
	printf("\nnhap y: ");
	scanf("%d",&y);
	
	int a=x;
	x=y;
	y=a;
	printf("\nsau khi doi cho:\n");
	printf("x = %d",x);
	printf("\ny = %d",y);
	return 0;
}

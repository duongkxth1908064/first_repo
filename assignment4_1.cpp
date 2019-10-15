#include <stdio.h>

int main(){
	
	int a,b,c;
	do {
	    printf("nhap a: ");
		scanf("%d",&a);
		printf("nhap b: ");
		scanf("%d",&b);
		printf("nhap c: ");
		scanf("%d",&c);
	} while (
	    !(a+b>c && a+c>b && c+b>a)
	);
	
	printf("ban da nhap dung 3 canh cua 1 tam giac\n");
	
	return 0;
}

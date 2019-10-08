//nhap 3 so, kiem tra xem co phai 3 canh tam giac khong. neu co, tinh chu vi, dien tich

#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	printf("\nnhap c: ");
	scanf("%d",&c);
	
	if (((a+b)>c ) && ((a+c)>b ) && ((c+b)>a) ){
		printf("cac so da nhap la 3 canh cua 1 tam giac\n");
		
		int p=a+b+c;
		printf("chu vi: %d\n",p);
		p=p/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("dien tich: %f",s);
		
	} else {
		printf("cac so da nhap khong phai la 3 canh cua 1 tam giac");
	}
	
	return 0;
}

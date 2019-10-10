// nhap a, b, c tim nghiem phuong trinh ax^2+bx+c=0

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
	
	if(a!=0){
		float d=b*b-4*a*c;
		
		if (d<0){
			printf("\nphuong trinh vo nghiem");
		} else if (d==0){
			float x = -b/(2*a);
			printf("\nphuong trinh co nghiem kep x1 = x2 = %f",x);
		} else{
			float x1 = (-b+sqrt(d))/(2*a);
			float x2 = (-b-sqrt(d))/(2*a);
			printf("\nphuong trinh co hai nghiem\nx1 = %f\n",x1);
			printf("x2 = %f",x2);
		}
	}else if (b==0){
		if (c==0){
			printf("phuong trinh vo so nghiem");
		}else{
			printf("phuong trinh vo nghiem");
		}
	}else {
		float x=(float)-c/b;
		printf("phuong trinh co 1 nghiem x = %f",x);
	}
	return 0;
}

#include <stdio.h>

int main(){
	
	float a, b, c, max, min;
	
	printf("nhap vao 3 so:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	if (a<b){
		max = b;
		min = a;
	}else{
		max = a;
		min = b;
	}
	
	if (c<min){
		min = c;
	}
	
	if (c>max){
		max = c;
	}
	
	printf("max: %f\n", max);
	printf("min: %f\n", min);

	return 0;
}



#include <stdio.h>

int main(){
	
	float a,b,c,max,min;

	scanf("%f",&a);
	scanf("%f",&b);	
	scanf("%f",&c);	
	
	if(a<b){
		min=a;
		max=b;
	}else{
		max=a;
		min=b;
	}
	
	if(c<min){
		min=c;
	}
	
	if(c>max){
		max=c;
	}
	
	printf("max = %f\n",max);
	printf("min = %f\n",min);
	
	
	return 0;
}
	


#include <stdio.h>

int main(){
	
	int x;
	float y;
	double z;
	char h;
	x=10;
	y=3.14+5;
	h='a';
	printf("x = %d\n",x);
	
	int k=5;
	x=k+10;
	
	printf("x = %d\n",x);
	
	x=x+20;
	x++;
	x--;
	x+=20;
	x/=3;
	printf("x = %d\n",x);
	
	x+=h;
	printf("x = %d\n",x);
	
	y=x+30.5;
	x=(int)(y);
	printf("x = %d\n",x);
	printf("y = %f\n",y);
	
	scanf("%d",&x);
	scanf("%f",&y);
	
	printf("x = %d\n",x);
	printf("y = %f\n",y);
	
	
	return 0;
}

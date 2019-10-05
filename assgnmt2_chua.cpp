#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap so thu hai:\n");
	scanf("%d",&b);
	printf("Nhap so thu ba:\n");
	scanf("%d",&c);
	
	
	if(a>b){
		if(b>c){
			printf("max = %d  -   min = %d\n",a,c);
		}else{
			if(a>c){
				printf("max = %d  -   min = %d\n",a,b);
			}else{
				printf("max = %d  -   min = %d\n",c,b);
			}
		}
	}else{
		if(a>c){
			printf("max = %d  -   min = %d\n",b,c);
		}else{
			if(b>c){
				printf("max = %d  -   min = %d\n",b,a);
			}else{
			    printf("max = %d  -   min = %d\n",c,a);	
			}
			
		}
	}
	
	return 0;
}

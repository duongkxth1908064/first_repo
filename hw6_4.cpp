//In ra cac so nghich dao cua cac so trong mang 10 so.


#include <stdio.h>

int main(){
	
	int a[10];
	
	for (int i=0;i<10;i++){
		
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);	
	}
	
	printf("nghich dao cua cac so trong mang\n");
	
	for(int i=0;i<10;i++){
		
		int t=0;
	
	    while (a[i]!=0){
		    t=t*10+a[i]%10;
		    a[i]=a[i]/10;
		}
	
		printf("%d",t);
		printf("\n");
		
	}
	
	return 0;
	
}


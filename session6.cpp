#include <stdio.h>

int main(){
	
	int a[10];
	a[0]=20;
	a[9]=11;
	a[5]=7;
	
	
	for (int i=0;i<10;i++){
		
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		
//		printf("%d: %d\n",i,a[i]);
	}
	
	
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	int max = a[0];
	int min = a[0];
	
	
	for(int i=0;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	
	int smax=min;
	int smin=max;
	
	for(int i=0;i<10;i++){
		if(smax<a[i]&&a[i]!=max){
			smax=a[i];
		}
		if(smin>a[i]&&a[i]!=min){
			smin=a[i];
		}
	}
	
	
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	printf("smax = %d\n",smax);
	printf("smin = %d\n",smin);
	
	return 0;
	
}

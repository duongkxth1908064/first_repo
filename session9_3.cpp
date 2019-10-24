#include <stdio.h>

void inMang(int array[],int n){
	
	for (int c = 0 ; c < n - 1; c++){
		
        for (int d = 0 ; d < n - c - 1; d++){
          	
    		if (array[d] > array[d+1]){
          	
	            int swap   = array[d];
	            array[d]   = array[d+1];
	            array[d+1] = swap;
            }
        }
    }
	
	for(int i=0;i<n;i++){
		printf("%d \n",array[i]);
	}
}


int main(){
	
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	
	int a[n],x;
	for (int i=0;i<n;i++){
		
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	inMang(a,n);

	return 0;
}

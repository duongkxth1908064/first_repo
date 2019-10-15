//nhap n, tim cac so nguyen to <=n

#include <stdio.h>

int main(){
	
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	
	
	for(int i=1;i<=n;i++){
		
		int dem=0;
	    for(int j=2;j<i;j++){
		    if(i%j==0){
			    dem++;
			    break;
		    }
	    }
	    
		if(dem==0){
		    printf("%d ",i);
		} 
	}
	
	return 0;
}

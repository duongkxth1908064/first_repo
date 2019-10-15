// Nhap 1 so, kiem tra co phai so hoan hao


#include <stdio.h>

int main(){
	
	int n;
	int s=0;
	printf("nhap n: ");
	scanf("%d",&n);
	
	for(int i=1;i<n;i++){
	    	    
		if(n%i==0){
		    s=s+i;
		} 
	}
	
	printf("%d",s);
	
	if (s==n){
		printf("la so hoan hao");
	} else {
		printf("khong phai so hoan hao");
	}
	
	return 0;
}

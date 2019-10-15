//so nguyen to

#include <stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			dem++;
			break;
		}
	} 
	
	if(dem!=0){
		printf("khong phai so nguyen to");
	}else{
		printf("la so nguyen to");
	}
	
	return 0;
}

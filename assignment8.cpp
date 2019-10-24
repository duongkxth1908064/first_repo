#include <stdio.h>

int main(){
	
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	
	int a[n],x;
	for (int i=0;i<n;i++){
		
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("nhap x=\n");
	scanf("%d",&x);
	int i;
	for (i=0;i<n;i++){
		if (x==a[i]){
			printf("%d nam trong mang vua nhap\n",x);	
			printf("tai vi tri gan nhat %d\n",i);
			break;
		}
		
	}
	
	if(i>=n){
		printf("%d KHONG nam trong mang vua nhap\n",x);	
	}

	return 0;
}

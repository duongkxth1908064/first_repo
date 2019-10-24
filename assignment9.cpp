#include <stdio.h>

bool isIn(int a[],int n,int x){
	
	for(int i=0;i<n;i++){
		if (a[i]==x) return true;
	}
	
	return false;
}

void inSoLe(int a[],int n){
	printf("cac so le trong mang: \n");
	for(int i=0;i<n;i++){
		if (a[i]%2!=0) printf("%d ",a[i]);
	}
	
}

int fibo(int n){
	int x0=0;
	int x1=1;
	int x2=1;
	
	for(int i=0;i<n;i++){
		
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	
	return x0;
	
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
	
	
	printf("nhap x=\n");
	scanf("%d",&x);
	
	if (isIn(a,n,x)){
	    printf("%d CO nam trong day so\n",x);
	} else printf("%d KHONG nam trong day so\n",x);


	inSoLe(a,n);
	
	int z;
	printf("nhap z=\n");
	scanf("%d",&z);
	
	printf("so thu %d trong day Fibonaci: %d",z,fibo(z));
	
	return 0;
}

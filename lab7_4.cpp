//Nhap vao mang n phan tu, khong trung so


#include <stdio.h>

int inarray(int x,int a[]);

int main(){
	
	int n;
	
	printf("nhap n : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (int i=0;i<n;i++){
		int temp;bool check=true;
		do{
			printf("nhap phan tu thu %d: ",i+1);
		    scanf("%d",&temp);
			
			bool flag=true;
			for(int j=0;j<i;j++){
				if (a[j]==temp){
					flag=false;break;
				}
			}
			if (flag){
			    a[i]=temp;	
			    check=false;
			}
			
				
		} while (check);
		a[i]=temp;
	}
	
	for(int i=0;i<n;i++){
	   printf("%d ",a[i]);
	}
	
	return 0;
	
}

//In ra cac so nghich dao cua cac so trong mang 10 so.


#include <stdio.h>

int timNghichDao(int x){
	int t = 0;
	while (x!=0){
	    t=t*10+x%10;
	    x=x/10;
	}

	return t;
}

void inMangSoNguyen(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("%d \n",ary[i]);
	}
}

void inMangSoNguyenCach2(int *ary){

	for(int i=0;i<sizeof(ary)/sizeof(int);i++){
		printf("%d \n",ary[i]);
	}
	
}

int main(){
	int x;

	printf("nhap x =\n");
	scanf("%d",&x);
	printf("nghich dao cua x: %d\n",timNghichDao(x));

	int arr[5] = {3,1,4,5,7};
//	inMangSoNguyen(arr,5);
    inMangSoNguyenCach2(arr);

	return 0;

}

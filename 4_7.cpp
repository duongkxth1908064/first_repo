#include <stdio.h>

int main(){
	
	for (int i=0;i<10;i++){
//		printf("bat dau vong i= %d\n",i);
		for (int j=0;j<i;j++){
			printf("*");
		}
//		printf("ket thuc vong i= %d\n",i);
		printf("\n");
	}
	
	
	return 0;
}

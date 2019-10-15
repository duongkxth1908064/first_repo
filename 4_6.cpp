#include <stdio.h>

int main(){

	for(int i=0;i<10;i++){
		printf("bat dau vong %d\n",i);
		//...
		if(i==5){
			continue;
		}
		printf("ket thuc vong %d\n",i);
	}
	return 0;
}

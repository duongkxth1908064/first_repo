#include <stdio.h>

int binhPhuongTong(int a, int b){
	int x=a+b;
	x = x*x;
	return x;
}


int binhPhuong(int x){
	return x*x;
}

int songaunhien(){
	return 10;
}

void inramenu(){
	printf("1. ca\n");
	printf("2. tom\n");
	printf("3. ga\n");
}


int main(){
	//day la noi su dung
	
	printf("z = %d\n",binhPhuongTong(15,22));
	
	printf("zz = %d\n",binhPhuong(15));
	
	inramenu();
	
	return 0;
}

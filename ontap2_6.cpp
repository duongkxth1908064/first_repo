//menu 2 tang

#include <stdio.h>
int main(){
	int n;
	do{
		printf("Vui long chon chuc nang:\n" );
		printf("1. Goi do uong\n" );
		printf("2. Goi mon an\n" );
		printf("3. Tinh tien\n" );
		printf("4. Thoat chuong trinh\n" );
		scanf("%d",&n);
	}while(n>4||n<1);
	switch(n){
		case 1:{
			printf("KH vua goi do uong\n");
			
			do{
		        printf("Vui long chon chuc nang:\n" );
				printf("1. cam\n" );
				printf("2. tao\n" );
				printf("3. buoi\n" );
				printf("4. Thoat chuong trinh\n" );
				scanf("%d",&n);
			}while(n>4||n<1);
			
			switch(n){
				case 1:printf("KH vua goi cam\n");break;
				case 2:printf("KH vua goi tao\n");break;
				case 3:printf("KH vua goi buoi\n");break;
				case 4:printf("KH vua thoat\n");break;
			}
						
			break;
		}
		
		
		
		
		
		
		case 2:{
			printf("KH vua goi mon an\n");
			
			do{
		        printf("Vui long chon chuc nang:\n" );
				printf("1. pho\n" );
				printf("2. com rang\n" );
				printf("3. chao\n" );
				printf("4. Thoat chuong trinh\n" );
				scanf("%d",&n);
			}while(n>4||n<1);
			
			switch(n){
				case 1:printf("KH vua goi pho\n");break;
				case 2:printf("KH vua goi com rang\n");break;
				case 3:printf("KH vua goi chao\n");break;
				case 4:printf("KH vua thoat\n");break;
			}
						
			break;
		}
		
		case 3:{
			printf("KH vua goi tinh tien\n");
			
			do{
		        printf("Vui long chon chuc nang:\n" );
				printf("1. credit card\n" );
				printf("2. tien mat\n" );
				printf("3. bung\n" );
				printf("4. Thoat chuong trinh\n" );
				scanf("%d",&n);
			}while(n>4||n<1);
			
			switch(n){
				case 1:printf("KH vua tra bang the\n");break;
				case 2:printf("KH vua tra tien mat\n");break;
				case 3:printf("KH vua bung tien\n");break;
				case 4:printf("KH vua thoat\n");break;
			}
						
			break;
		}
		
		case 4:{
			printf("KH vua thoat\n");
						
			break;
		}
		
		
	}

	return 0;
}

//menu 2 tang

#include <stdio.h>
int main(){
	int n;
	bool cs=true;
	while(cs){
		
		do{
			printf("Vui long chon chuc nang:\n" );
			printf("1. Goi do uong\n" );
			printf("2. Goi mon an\n" );
			printf("3. Tinh tien\n" );
			printf("4. Thoat chuong trinh\n" );
			scanf("%d",&n);
		}while(n>4||n<1||!cs);
		switch(n){
			case 1:{
				printf("KH vua goi do uong\n");
				bool cs1=true;
				while(cs1){	
					do{
				        printf("Vui long chon chuc nang:\n" );
						printf("1. cam\n" );
						printf("2. tao\n" );
						printf("3. buoi\n" );
						printf("4. Quay lai menu\n" );
						scanf("%d",&n);
					}while(n>4||n<1);
					
					switch(n){
						case 1:printf("KH vua goi cam\n");break;
						case 2:printf("KH vua goi tao\n");break;
						case 3:printf("KH vua goi buoi\n");break;
						case 4:cs1=false;break;
					}
				}
				break;
			}
			
		
			case 2:{
				printf("KH vua goi mon an\n");
				bool cs2=true;
				while(cs2){	
					do{
				        printf("Vui long chon chuc nang:\n" );
						printf("1. pho\n" );
						printf("2. com rang\n" );
						printf("3. chao\n" );
						printf("4. Quay lai menu\n" );
						scanf("%d",&n);
					}while(n>4||n<1);
					
					switch(n){
						case 1:printf("KH vua goi pho\n");break;
						case 2:printf("KH vua goi com rang\n");break;
						case 3:printf("KH vua goi chao\n");break;
						case 4:cs2=false;break;
					}
			    }
				break;
			}
			
			case 3:{
				printf("KH vua goi tinh tien\n");
				bool cs3=true;
				while(cs3){	
					do{
				        printf("Vui long chon chuc nang:\n" );
						printf("1. credit card\n" );
						printf("2. tien mat\n" );
						printf("3. bung\n" );
						printf("4. Quay lai menu\n" );
						scanf("%d",&n);
					}while(n>4||n<1);
					
					switch(n){
						case 1:printf("KH vua tra bang the\n");break;
						case 2:printf("KH vua tra tien mat\n");break;
						case 3:printf("KH vua bung tien\n");break;
						case 4:cs3=false;break;
					}
				}
				break;
			}
			
			case 4:{
				cs=false;
							
				break;
			}
			
			
		}
	}
	return 0;
}

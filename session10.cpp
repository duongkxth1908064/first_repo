#include <stdio.h>
#include <string.h>

void chuyenVietHoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i] -=32;
		}
	}
	
	printf("chuoi sau khi chuyen hoa:$s\n",s);
}

void inRaCacChuoi(char s[][20], int n){
	for(int i=0;i<n;i++){
		printf("chuoi %d la: %s\n",i,s[i]);
	}
}


int main(){
	
	char s1[20], s2[20];
	printf("nhap chuoi1:\n");
	scanf("%s", s1);
	chuyenVietHoa(s2);
	printf("nhap chuoi2:\n");
	scanf("%s", s2);
	
	
	int ar[10];
	char s3[5][20];
	for (int i = 0;i<5;i++){
		printf("nhap a[%d] = \n",i);
		scanf("%s",s3[i]);
	}
	inRaCacChuoi(s3,5);
//	gets(str);
//	printf("chuoi vua nhap la:\n");
//	puts(str);
	
	
	printf("so sanh s1 va s2: %d\n",strcmp(s1,s2));
	
	printf("vi tri cua ky tu h trong s1: %lu\n", strchr(s1,'h')-s1);
	

	strcat(s1,s2);

	strcpy(s1,s2);
	chuyenVietHoa(s2);
	
	printf("chuoi s1 la: %s\n",s1);
	
	printf("chuoi s2 la: %s\n",s2);
	
	printf("so sanh s1 va s2: %d\n",strcmp(s1,s2));

    printf("do dai chuoi 1: %lu\n", strlen(s1));
	printf("do dai chuoi 2: %lu\n", strlen(s2));
	
	for (int i=strlen(s1)-1;i>=0;i--){
		printf("%c",s1[i]);
	}
	
	return 0;
}

#include <stdio.h>

int main(){

	float sum,rate;
	int year;

	printf("Enter Capital Sum\n");
	scanf("%f",&sum);
	
	printf("Enter Rate of Interest\n");
	scanf("%f",&rate);
	
	printf("Enter No of years\n");
	scanf("%d",&year);

	for(int i=1;i<=year;i++){

		float interest = sum*(rate/100);
		sum += interest;
		printf("Year	Interest	Sum\n");
		printf("%d	%f	%f\n",i,interest,sum);
	}

	return 0;
}

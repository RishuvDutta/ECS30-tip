#include <stdio.h>

int main() {
	float x;
	printf("Enter your check balance: ");
	scanf("%f", &x);
	int y;
	printf("How much would you like to tip, as a percent? ");
	scanf("%d", &y);
	float z = x * y/100;
	printf("Your tip is $%.2f \n", z); 
	return 0;	
}

#include <stdio.h>

int main () {
	int x,rem,rev=0;
	
	printf("Enter any number :");
	scanf("%d", &x);
	
	for (int i =0; x>=1; i++) {
		rem = x % 10;
		rev = rev * 10 + rem;
		x = x/10; 
	}
	printf("Your reversed number is %d",rev);
	
	return 0;
}
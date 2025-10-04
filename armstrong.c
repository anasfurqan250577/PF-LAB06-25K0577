#include <stdio.h>
void main(){
	int num, rem, result = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int tempnum = num;
	while(tempnum > 0){
		rem = tempnum % 10;
		result += rem * rem * rem;
		tempnum /= 10;
	}
	
	if(result == num){
		printf("%d is an Armstrong Number.", num);
	}
	else{
		printf("%d is not an Armstrong Number.", num);
	}
}

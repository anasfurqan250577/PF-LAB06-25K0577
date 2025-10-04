#include <stdio.h>
void main(){
	int i, sumOfEven = 0, sumOfOdd = 0;
	for(i=1; i<=20; i++){
		if(i % 2 == 0){
			sumOfEven += i;
		}
		else{
			sumOfOdd += i;
		}
	}
	
	printf("Sum of Even Numbers (1-20): %d", sumOfEven);
	printf("\nSum of Odd Numbers (1-20): %d", sumOfOdd);
}

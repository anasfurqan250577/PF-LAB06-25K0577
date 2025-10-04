#include <stdio.h>
void main(){
	int num, power;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Enter it's power: ");
	scanf("%d", &power);
	
	int ans = num;
	
	if(power == 0){
		ans = 1;
	}
	else{
		int pow = power;
		while(pow>1){
			ans *= num;
			pow--;
		}
	}
	
	printf("\n%d raise to the power %d is %d", num, power, ans);
}

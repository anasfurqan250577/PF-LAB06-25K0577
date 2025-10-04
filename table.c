#include <stdio.h>
void main(){
	int num, i;
	char choice;

	do{
		printf("Enter a number: ");
		scanf("%d", &num);
		
		for(i=1; i<=10; i++){
			printf("\n%d * %d = %d", num, i, num*i);
		}
		
		printf("\n\nDo you want to print another table? (Y/N): ");
		scanf(" %c", &choice);
	}while(choice == 'Y' || choice == 'y');
}

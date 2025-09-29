#include <stdio.h>

void main () {
	
	int newpas,pass=5558;
	
	
	do {
		
	printf("Enter your password: ");
	scanf("%d",&newpas);
	 if (newpas != pass) {
	 	printf("\n Incorrect password try again \n");
	 } else {
	 	printf("correct password"); 
	 	break;
	 }
		
	}while (newpas != pass);
}
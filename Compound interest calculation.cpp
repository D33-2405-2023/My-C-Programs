// 2. Program to calculate compound interest given; compound interest(A) = p(1 + r/n)^n*t
#include<stdio.h>
#include<stdlib.h>// exit function
#include<math.h> //pow function

int main(){
	float principal, rate, time, compound_interest;
	int n,choice;
	
	while(1){ // infinite loop activated until one chooses to exit
	//program to input values
	printf("\nEnter the principal amount (ksh):");
	scanf("%f", &principal);
	printf("Enter the rate of interest (%%):");
	scanf("%f", &rate);
	printf("Enter the time (in years):");
	scanf("%f", &time);
	printf("Enter the number of times interest is compounded per year:");
	scanf("%d", &n);
	
	//calculating compound interest
	compound_interest = principal*pow((1 + rate/ (100*n)), (n*time));

   // displaying results
   printf("final amount after compound interest: ksh%.2f\n", compound_interest);
   
   // exit option
   printf("\nEnter 0 to exit or 1 to continue:");
   scanf("%d", &choice);
   if (choice == 0){
   	printf("Exiting program...\n");
   	exit(0);
   }
	}
	return 0;
}

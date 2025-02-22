//1.  Program to calculate simple interest given; simple interest = (principal amount*time*rate)/100
#include<stdio.h>
#include<stdlib.h> //exit function

int main() {
	float principal,time,rate,simple_interest;
	int choice;
	
	while(1) {//infinite loop activated until one chooses to exit
	//program for inputing values
	printf("\nEnter the principal amount (ksh):");
	scanf("%f", &principal);
	printf("Enter the time(in years):");
	scanf("%f", &time);
	printf("Enter the rate of interest(%%):");
	scanf("%f", &rate);
	
	//calculating simple interest
	simple_interest = (principal * time *rate)/100;
	
	//displaying results
	printf("simple interest: ksh%.2f\n", simple_interest);
	 //exit option
	 printf("\nEnter 0 to exit or 1 to continue:");
	 scanf("%d", &choice);
	 if (choice == 0){
	 	printf("Exiting program...\n");
	 	exit(0);
	 }	 
}
return 0;
}

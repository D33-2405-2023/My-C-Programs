// Program to find area of a rectangle
#include <stdio.h>
#include <stdlib.h> //exit function

int main(){
	float length, width,area;
	int choice;
	
	while(1){ //infinite loop activated until one chooses to exit
	
	// inputing values
	printf("\nEnter the length of the rectangle(in cm):");
	scanf("%f", &length);
	printf("Enter the width of the rectangle (in cm):");
	scanf("%f", &width);
	
	//calculating area
	area = length * width;
	
	//Displaying results
	printf("Area of the rectangle: %.2f cm2\n", area);
	
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

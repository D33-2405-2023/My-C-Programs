// Program to take 5 values from the user and store them in an 1D array
// Print the elements stored in the 1D array

/*
Author:Maureen Wangeci 
Reg no:D33-2405-2023
Date:21/3/2025
*/
#include <stdio.h>

int main() {

  int values[5]={0,1,2,3,4};

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of the array
  for(int i = 0; i <5 ; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
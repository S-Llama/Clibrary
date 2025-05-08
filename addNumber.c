#include <stdio.h> //header file
int main ()
{
  int firstnumber, secondnumber, result; //  variable initialization 
  printf("Enter first Number:"); 
  printf("\n"); // \n helps to break the line
  scanf("%d",&firstnumber);
  
  printf("Enter second number:"); 
  printf("\n");
  scanf("%d",&secondnumber);
  printf("\n");
  
  //operation or equation
  result = firstNumber + secondNumber;
 
  //Display
  printf("Addition = %d", result);
  return 0;
    }
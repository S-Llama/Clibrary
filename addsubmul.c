#include <stdio.h>
int main ()
{
	int firstNumber, secondNumber, add, sub, mul;
	printf("Enter first number:");
	 printf("\n");
  scanf("%d",&firstNumber);
  
   printf("Enter second Number:"); 
  printf("\n");
  scanf("%d",&secondNumber);
  printf("\n");
  
  add=firstNumber+secondNumber;
  printf("Addition=%d", add);
  printf("\n");
  
  sub=firstNumber-secondNumber;
  printf("Subbtract=%d",sub);
  printf("\n");
  
  mul=firstNumber*secondNumber;
  printf("multiply=%d",mul);
  printf("\n");
  return 0;
}
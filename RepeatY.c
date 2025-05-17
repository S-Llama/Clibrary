#include <stdio.h>
int main (){
	int num1, num2, add;
	char option;
	do{
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);
	add=num1+num2;
	printf("The addition is:%d \n", add);
	printf("Do you want to continue? Press y or Y to continue");
	scanf(" %c", &option);
}
    while(option == 'y'||option == 'Y');
    return 0;
}
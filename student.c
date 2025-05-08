#include <stdio.h>
int main (){
	int roll, age;
	char gender;
	char name [20];
	printf("Enter roll number\t");
	printf("\n");
	scanf("%d", &roll);
	printf("Enter age\t");
	printf("\n");
	scanf("%d", &age);
	printf("Enter name\t");
	printf("\n");
	scanf("%s", &name);
	printf("Enter gender\t");
	printf("\n");
	scanf(" %c", &gender);
	
	printf("/n Details /n");
	printf("\nRoll number = %d", roll);
	printf("\nAge = %d", age);
	printf("\nName = %s", name);
	printf("\nGender = %c", gender);
	return 0;
}

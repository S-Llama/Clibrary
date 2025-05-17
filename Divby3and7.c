#include<stdio.h>
int main(){
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	if((num%3==0) && (num%7==0)){
		printf("%d is divisible by 3 and 7.");
	}
	else if((num%3==0) && (num%7!=0)){
	printf("%d is divisible by 3 and not 7.");	
	}
	else if((num%3!=0) && (num%7==0)){
		printf("%d is divisible by 7 and not 3.");
	}
	else{
		printf("%d is not divisible by 3 and 7");
	}
	return 0;
}
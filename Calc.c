#include<stdio.h>
int main()
{
	double num1,num2,sum,sub,mul,div;
	int option;
	char repeat;
	do{
	printf("Simple Calculator \n");
	printf("Option: \n 1.Add \n 2.Subtract \n 3.Multiplication \n 4.Division \n");
	printf("\n Choose your option \n");
	scanf("%d", &option);
	
	if(option==1){
		printf("Enter a num1\n");
		scanf("%d", &num1);
		printf("Enter a num2\n");
		scanf("%d", &num2);
		sum=num1+num2;
		printf("Addition=%lf\n",sum);
	}
	else if(option==2){
		printf("Enter a num1\n");
		scanf("%d", &num1);
		printf("Enter a num2\n");
		scanf("%d", &num2);
		sub=num1-num2;
		printf("Subbtraction=%lf\n",sub);
	}
	else if(option==3){
		printf("Enter a num1\n");
		scanf("%d", &num1);
		printf("Enter a num2\n");
		scanf("%d", &num2);
		mul=num1*num2;
		printf("Multiplication=%lf\n",mul);
	}
	else if(option==4){
		printf("Enter a num1\n");
		scanf("%d", &num1);
		printf("Enter a num2\n");
		scanf("%d", &num2);
		div=num1/num2;
		printf("Division=%lf\n",div);
	}
	else{
		printf("Option is not available.");
	}
	printf("Do you want to continue? Press y to continue");
	scanf(" %c", &option);
}
while(option=='y');
return 0;
}
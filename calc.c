#include <stdio.h>
#include <stdlib.h>

int main(){


	double num1, num2;
	char op;

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("enter operator: ");
	scanf(" %c", &op);
	printf("enter another number: ");
	scanf(" %lf", &num2);

	if(op == '+'){
		printf("%f", num1 + num2);
	}else if(op == '-'){
		printf("%f", num1 - num2);
	}else if(op == '/'){
		printf("%f", num1 / num2);
	}else if(op == '*'){
		printf("%f", num1 * num2);
	}else{
		printf("Invalid operator");
	}

	return 0;

}

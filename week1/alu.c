#include<stdio.h>

int main() {
	int selection;
	int num1, num2;
	printf("Select ALU operation 1. ADD 2. SUB 3. MUL 4. DIV\n");
	scanf("%d", &selection);
	printf("Selected %d operation \n", selection);
	printf("Size of int: %zu bytes\n", sizeof(int));

	switch (selection) {
		case 1:
			printf("Enter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);	
			printf("Result of ADD %d %d, %d \n",num1,num2,num1 + num2);
			break;
		case 2:
			printf("Enter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);	
			printf("Result of SUB %d %d, %d \n",num1,num2,num1 - num2);
			break;
		case 3:
			printf("Enter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);	
			printf("Result of MUL %d %d, %d \n",num1,num2,num1 * num2);
			break;
		case 4:
			printf("Enter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);	
			printf("Result of DIV %d %d, %d \n",num1,num2,num1 / num2);
			break;
		default:
			printf("Invalid number entered");
	}
}

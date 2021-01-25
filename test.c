#include <stdio.h>

int add(int x, int y){
	return x+y;
}

int sub(int num1, int num2){
	return num1-num2;
}

int main(void){
	printf("Hellow world!\n");
	int num1, num2;
	num1=0;
	num2=0;
	printf("\nPlease enter num1:");
	scanf("%d",&num1);
	printf("\nPlease enter num2:");
	scanf("%d",&num2);
	printf("\n\n %d + %d = %d\n", num1, num2, add(num1,num2));

	return 0;
}


#include <stdio.h>
#include "foo.h"
#include "bar.h"

// Testing merge by adding a comment
// another line to test
// Test again
int add(int x, int y){
	return x+y;
}

// Another change by adding a comment
int sub(int num1, int num2){
	return num1-num2;
}

int mul(int num1, int num2){
	return num1*num2;
}

// added a comment
// and another comment
int div(int num1, int num2){
	return num1/num2;
}

int main(void){
	foo();
	bar();
	printf("Hellow world!\n");
	int num1, num2;
	num1=0;
	num2=0;
	printf("\nPlease enter num1:");
	scanf("%d",&num1);
	printf("\nPlease enter num2:");
	scanf("%d",&num2);
	printf("1) for subtraction 2) for addition:");
	int selection=0;
	scanf("%d",&selection);
	int answer=0;
	if (selection==1){
		answer=num1-num2;
		 printf("\n\n %d - %d = %d\n", num1, num2, answer);
	}
	else if (selection==2){
		answer=num1+num2;
		 printf("\n\n %d + %d = %d\n", num1, num2, answer);
	}



	return 0;
}


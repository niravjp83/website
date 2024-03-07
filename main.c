#include<stdio.h>

void main() {
	int num = 0;
	
	printf("Enter the num: ");
	scanf("%d", &num);

	if(num & 1)
		printf("This is odd number\n");
	else
		printf("This is even number\n");

}

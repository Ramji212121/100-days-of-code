#include<stdio.h>
int main() {
	int integer;
	printf("enter integer");
	scanf("%d",&integer);
	if(integer>0){
		printf("the integer is positive\n");
	}
		else if(integer<0){
		printf("the integer is negataive\n");
	}
		else if(integer==0){
		printf("the integer is zero\n");
	}
	
	return 0;
	}
	

#include<stdio.h>
int main(){
	float area,circumference,r;
	float PI=3.14;
	printf("enter the r of the circle");
	scanf("%f",&r);
	area= 3.14*r*r;
	circumference= 2*3.14*r;
	printf("area=%.2f\n",area);
	printf("circumference=%.2f\n",circumference);
	return 0;
}

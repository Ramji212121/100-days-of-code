#include<stdio.h>
int main(){
	int area,perimeter,l,b;
	printf("enter l and b of rectangle");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area=%d\n",area);
	printf("perimeter=%d\n",perimeter);
	return 0;
}

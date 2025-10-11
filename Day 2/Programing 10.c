#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a = ");
	scanf("%d",&a);
	
	printf("enter b = ");
	scanf("%d",&b);
	
	printf("the values before swapping: %d %d\n", a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("the values after swapping: %d %d\n", a,b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	return 0;
}

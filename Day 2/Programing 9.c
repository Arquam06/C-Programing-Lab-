#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("The values before swapping: %d %d \n", a,b);

	c=a;
	a=b;
	b=c;
	
	printf("The values after swapping: %d %d \n", a,b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
	return 0;
}

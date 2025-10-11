#include<stdio.h>
int main()
{
	int p,r,t;
	float SI;
	printf("Enter Your Principal: ");
	scanf("%d",&p);
	printf("Enter Your rate: ");
	scanf("%d",&r);
	printf("Enter Your time: ");
	scanf("%d",&t);
	SI=(p*r*t)/100;
	printf("Your Simple Interest= %.2f\n",SI);
	return 0;
}

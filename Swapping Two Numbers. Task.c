#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Number:");
	scanf("%d %d",&a,&b);
	printf("\nThe value Of a is =%d",a );
	printf("\nThe value of b is =%d",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping");
	printf("\nThe value of a is =%d",a);
	printf("\nThe value of b is =%d",b);
	return 0;
}

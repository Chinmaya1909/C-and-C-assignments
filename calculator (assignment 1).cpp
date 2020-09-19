#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	c=a+b;
	printf("The sum is= %d\n",c);
	d=a-b;
	printf("The difference is= %d\n",d);
	e=a*b;
	printf("The product is= %d\n",e);
	f=a/b;
	printf("The quotient is= %d\n",f);
	g=a%b;
	printf("Dividing by the remainder is=%d",g);
	return 0;
}

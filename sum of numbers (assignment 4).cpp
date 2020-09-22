#include<stdio.h>
int main()
{
	int num,sum=0;
	do
	{
		printf("enter your number:");
		scanf("%d",&num);
		sum+=num;
	}while (num!=0);
	printf("Total=%d",sum);
	return 0;
}

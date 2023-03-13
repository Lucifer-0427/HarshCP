int fac(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
}
#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("fac of %d is=%d",num,fac(num));
	return 0;
}

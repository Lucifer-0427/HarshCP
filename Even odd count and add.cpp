#include<stdio.h>
int main()
{
	int num,i,odd=0,even=0,sum1=0,sum2=0;
	printf("Enter Number :\n"); 
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			sum1=sum1+num;
			even++;
		}
		else
		{
			sum2=sum2+num;
			odd++;
		}
	}
	printf("count of even numbers : %d\n",even);
	printf("count of odd numbers : %d\n",odd);
	printf("addition of even number:%d\n",sum1);
	printf("addition of odd number:%d\n",sum2);

	return 0;
}

#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,Total;
	printf("enter the marks of maths:");
	scanf("%d",&sub1);
	printf("enter the marks of science:");
	scanf("%d",&sub2);
	printf("enter the marks of english:");
	scanf("%d",&sub3);
	printf("enter the marks of gujarati:");
	scanf("%d",&sub4);
	printf("enter the marks of s.s:");
	scanf("%d",&sub5);
	Total=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("your percentage =%d\n",Total);
	
	if(Total>=85)
	{
		printf("Grade A");
	}
	else if(Total>=75)
	{
		printf("Grade B");
	}
	else if(Total>=65)
	{
		printf("Grade C");
	}
	else if(Total>=55)
	{
		printf("Grade D");
	}
	else if(Total>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}

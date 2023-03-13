#include<stdio.h>
int main()
{
	char str[30];
	int small=0,capital=0,i;
	printf("enter anything:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{

		if(str[i]>'a'&& str[i]<='z')
		{
			small++;
		}
		else if(str[i]>'A' && str[i]<='Z')
		{
			capital++;
		}
	}
	printf("number of capital letters:%d\nnumber of small letters:%d",capital,small);
	return 0;
}

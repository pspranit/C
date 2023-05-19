#include<stdio.h>

void TimeTable(int iStd)
{
	if(iStd==1)
	{
	printf("your exam is at:11AM\n");
	}
	else if(iStd==2)
	{
	printf("your exam is at:12NOON\n");
	}
	else if(iStd==3)
	{
	printf("your exam is at:1PM\n");
	}
	else if(iStd==4)
	{
	printf("your exam is at:2PM\n");
	}
	else
	{
	printf("Wrong division\n");
	}
}	
int main()
{
	int iValue=0;

 	printf("Enter your standard\n");
	scanf("%d",&iValue);

	TimeTable(iValue);

	return 0;
}

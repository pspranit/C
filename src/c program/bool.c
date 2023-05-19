#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
	if((iNo % 2)==0)	
	{
	return true;
	}
	else
	{
	    return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet=false;
	printf("enter number\n");
	scanf("%d",iValue);
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
	printf("number is even\n");
	}
	else
	{
	printf("number is not even\n");
}

	return 0;
}

















 
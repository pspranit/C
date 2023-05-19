#include<stdio.h>

 int Minimum(int iNo1,int iNo2)
{
	int iResult=0;
	
	if(iNo1<iNo2)
	{
		iResult=iNo1;
	}
	else
	{
		iResult=iNo2;
	}
	return iResult;
}

	int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	
	printf("enter first number\n");
	scanf("%d",&iValue1);
	printf("enter second number\n");
	scanf("%d",&iValue2);
	
	
	iRet=Minimum(iValue1,iValue2);
	
	printf("minimum is:%d\n",iRet);
	
	return 0;
}

	
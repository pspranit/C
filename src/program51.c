#include<stdio.h>

 float Average(int iNo1,int iNo2,int iNo3)
{
	int iSum=0;
	float fResult=0.0;
	
	iSum=iNo1+iNo2+iNo3;
	fResult=iSum/3;
	return fResult;
}
	int main()
{
	int iValue1=0,iValue2=0,iValue3=0;
	float fRet=0;
	
	printf("enter first name");
	scanf("%d",&iValue1);
	
	printf("enter second name");
	scanf("%d",&iValue2);
	
	printf("enter third name");
	scanf("%d",&iValue3);
	
	fRet=Average(iValue1,iValue2,iValue3);
	printf("Average is:%f\n",fRet);
	return 0;
}

	
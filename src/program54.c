#include<stdio.h>
int Count(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>=5)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
		return iCnt;
}
 int main()
{
	int iValue=0;
	int	 iRet=0;
	
	printf("enter first number\n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	printf("Digits greater than 5 are:%d\n",iRet);
	
	return 0;
}

	
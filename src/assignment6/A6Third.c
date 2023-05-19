/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept number from user and return the count of digits in between 3 to 7

// i/p : 2395
// o/p : 1

// i/p : 1018
// o/p : 0

// i/p : 4521
// o/p : 2

// i/p : 9922
// o/p : 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

int CountRange(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit > 3 && iDigit < 7)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number:");
	scanf("%d",&iValue);

	iRet = CountRange(iValue);
	printf("%d",iRet);

	return 0;
}
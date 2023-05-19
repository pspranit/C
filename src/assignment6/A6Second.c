/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept number from user and return the count of odd digits

// i/p : 2395
// o/p : 3

// i/p : 1018
// o/p : 2

// i/p : -1018
// o/p : 2

// i/p : 8462
// o/p : 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

int CountOdd(int iNo)
{
	int iDigit = 0, iCnt = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
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

	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet = CountOdd(iValue);
	printf("Count of odd digits= %d",iRet);

	return 0;
}
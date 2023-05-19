/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept number from user and return differnce between summation of even digits and summation of odd digits

// i/p : 2395
// o/p : -15 (2 - 17)

// i/p :1018
// o/p : 6 (8 - 2)

// i/p : 5733
// o/p : -18 (0 - 18)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0, iSum = 0, iAdd = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iSum = iSum + iDigit;
		}
		if((iDigit % 2) != 0)
		{
			iAdd = iAdd + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSum - iAdd;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet = CountDiff(iValue);
	printf("%d",iRet);

	return 0;
}
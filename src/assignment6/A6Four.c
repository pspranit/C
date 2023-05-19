/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept number from user and return multiplication of all digits

 i/p : 2395
 o/p : 270

 i/p : 1018
 o/p : 8

 i/p : 9440
 o/p : 144

 i/p : 922432
 o/p : 864
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

int MultDigits(int iNo)
{
 	int iDigit = 0;
	int iMult = 1;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iDigit = 1;
		}
		iMult = iMult * iDigit;
		iNo = iNo / 10;
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet = MultDigits(iValue);
	printf("%d",iRet);

	return 0;
}
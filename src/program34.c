#include<stdio.h>
#include<stdbool.h>

int Reverse(int)
bool CheckPalindrome(int);

int main()
{
	int iValue=0;
	bool bRet= false;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPalindrome(iValue);
	
	if(bRet==true)
	{
		printf("number is Palindrome\n");
	}
	else
	{
		printf("number is not CheckPalindrome\n");
	}	
	return 0;
	}

bool Reverse(int iNo)
{
	int iDigit=0;
	int iRev=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	
	return iRev;	
}
bool Checkpalindrome(int Input)
{
	int iNumber=0;
	iNumber=Reverse(iInput);
	if(iNumber==iInput)
	{
		return true;
	}
	else
	{
		return false;
		}
}


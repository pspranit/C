////////////////////////////////////////////////////////////////////
//inpur: 6

//iCnt: 1 2 3 4 5 6

//output: A B C D E F G
 /////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char ch='\0';
	
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
		ch++;
	}
		printf("\n");
}

int main()
{
	int iValue=0;
	
	printf("enter number");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
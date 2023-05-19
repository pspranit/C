#include<stdio.h>

void DisplayTable(int);

int main()
{
	int iValue=0;
	
	printf("enter number to display its table\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}

void DisplayTable(int iNo)
{ 
int iTable=0,iCnt=0;
	if(iNo==0)
	{
		return;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}

for(iTable=1;iTable<=10;iTable++)
{
	iCnt=iNo*iTable;
	printf("%d\n",iCnt);
}
}
#include<stdio.h>

int PowerIW(int x,int y)
{
	int iMult=1;
	
	while(y!=0)
	{
		iMult=iMult*x;
		y--;
	}
	return iMult;
}

int PowerIF(int x,int y)
{
	int iMult=1,i=0;
	
	for(i=0;i<=y;i++)	
	{
		iMult=iMult*x;
	}
	return iMult;
}

int PowerR(int x,int y)
{
	static int iMult=1;
	
	while(y!=0)	
	{
		iMult=iMult*x;
		y--;
		PowerR(x,y); 	//Recursive call
	}
	return iMult;
}


int main()
{
	int No1=0,No2=0,iRet=0;
	
	printf("Enter Base\n");
	scanf("%d",&No1);
	
	printf("Enter Power\n");
	scanf("%d",&No2);
	
	iRet=PowerIW(No1,No2);
	printf("REsult is:%d\n",iRet);
	
	iRet=PowerIF(No1,No2);
	printf("REsult is:%d\n",iRet);
	
	iRet=PowerR(No1,No2);
	printf("REsult is:%d\n",iRet);
	return 0;
}
#include<stdio.h>

int main()
{
	int arr[5];
	int iSum=0;
	int iCnt=0;
	
	printf("enter numbers\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	
	/*iSum=iSum+arr[0];
	iSum=iSum+arr[1];
	iSum=iSum+arr[2];
	iSum=iSum+arr[3];
	iSum=iSum+arr[4];*/
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+arr[iCnt];
	}
	
	printf("addition is:%d\n",iSum);
	
	return 0;
}
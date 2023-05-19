#include<stdio.h>
#include<stdlib.h>

int Addition(int brr[],int iSize)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+brr[iCnt];
	}
	return iSum;
}

int main()
{
	int *arr=NULL;
	int iRet=0;
	int iCnt=0;
	int iLength=0;
	
	printf("enter numbers of elements\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(sizeof(int)*iLength);
	
	printf("enter numbers\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	
	iRet=Addition(arr,6);
	printf("addition is:%d\n",iRet);
	
	free(arr);
	return 0;
}
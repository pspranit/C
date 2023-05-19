#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	int iSum=0;

	for(i=0;i<iSize;i++)
	{
		if((Arr[i] % 2)!= 0)
		{
			iSum=iSum+Arr[i];
		}
	}
	return iSum;
}

int main()
{
	int iLength=0,i=0;
	int iRet=0;
	int *ptr=NULL;

	printf("enter number of elements\n");
	scanf("%d",&iLength);

	ptr=(int*)malloc(sizeof(int)*iLength);

	printf("enter elements\n");

	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}

	iRet=CountOdd(ptr,iLength);
	printf("number of odd elements are:%d\n",iRet);
	free(ptr);
	return 0;
}
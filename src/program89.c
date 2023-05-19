#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckNumber(int Arr[],int iSize)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			return true;
		}
	}
	return false;	
}

int main()
{
	int iLength=0,i=0;
	bool bRet=false;
	int *ptr=NULL;

	printf("enter number of elements\n");
	scanf("%d",&iLength);

	ptr=(int*)malloc(sizeof(int)*iLength);

	printf("enter elements\n");

	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}

	bRet=CheckNumber(ptr,iLength);
	
	if(bRet==true)
	{
		printf("number is there\n");
	}
	else
	{
		printf("number is not there\n");
	}
	free(ptr);
	return 0;
}
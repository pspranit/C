#include<stdio.h>

int main()
{
	int arr[5];
	int iSum=0;
	
	printf("enter numbers\n");
	
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);
	scanf("%d",&arr[3]);
	scanf("%d",&arr[4]);
	
	iSum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	
	printf("addition is:%d\n",iSum);
	
	return 0;
}
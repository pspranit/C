////////////////////////////////////////////////////////////////////
 

// row=4   column=4

/*output: # # # # 
		  * * * * 
          # # # #
		  * * * *
////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
	for(j=1;j<=iCol;j++)
	{
		if((i%2)==0)
		{ 
			printf("*\t");
		}
		else
		{
			printf("#\t");
		}
}
	printf("\n");
}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("enter number of rows\n");
	scanf("%d",&iValue1);
	printf("enter number of columns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
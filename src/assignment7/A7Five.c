/*/ ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Accept area in square feet and convert it into square meter.(1 sq.ft = 0.0929 sq.mtr)

// i/p : 5
// o/p : 0.464515

// i/p : 7
// o/p : 0.650321
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>
#define SQMTR 0.0929

double SquareMeter(int iValue)
{
	double dArea = 0;

	dArea = iValue * SQMTR;

	return dArea;
}
int main()
{
	int iValue = 0;
	double dRet = 0.0;

	printf("Enter area in square feet:\n");
	scanf("%d",&iValue);

	dRet = SquareMeter(iValue);
	printf("%lf",dRet);

	return 0;
}

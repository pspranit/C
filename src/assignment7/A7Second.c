/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Accept width and height of rectangle from user and calculate area. (Area = width * heght)
// i/p : 5.3  9.78
// o/p : 51.834
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
	double dArea = 0.0;
	
	dArea = fWidth * fHeight;

	return dArea;
}
int main()
{
	float fValue1 = 0.0;
	float fValue2 = 0.0;
	double dRet = 0.0;

	printf("Enter Width:\n");
	scanf("%f",&fValue1);	

	printf("Enter Height:\n");
	scanf("%f",&fValue2);

	dRet = RectArea(fValue1,fValue2);
	printf("Area of Rectangle is:%lf",dRet);	

	return 0;
}
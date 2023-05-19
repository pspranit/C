/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept radius of circle from user and calculat its area
// Areaof Circle = PI * Radius * Radius

// i/p : 5.3
// o/p : 88.2026

// i/p : 10.4
// o/p : 339.6224
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>
//#define PI == 3.14

double CircleArea(float fRadius)
{
	double dArea = 0.0;

	dArea = 3.14 * fRadius * fRadius;

	return dArea;	
}
int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter Radius:\n");
	scanf("%f",&fValue);

	dRet = CircleArea(fValue);
	printf("Area of Circle is:%lf",dRet);

	return 0;
}

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Accept temperature in Fehrenheit and convert it into celcius.(1 celcius = ((fehrenheit - 32) * 5) / 9
// i/p : 10
// o/p : -12.2222 ((10 - 32) * 5) / 9

// i/p : 34
// o/p : 1.11111 ((34 - 32) * 5) / 9
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

#include<stdio.h>

double Celcius(float fTemp)
{
	double dCels = 0.0;
	
	dCels = ((fTemp - 32) * 5) / 9;

	return dCels;	
}
int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter Temperature in Fehrenheit:\n");
	scanf("%f",&fValue);

	dRet = Celcius(fValue);
	printf("%lf",dRet);

	return 0;
}
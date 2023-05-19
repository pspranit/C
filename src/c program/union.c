#include<stdio.h>

struct Demo
{
	int x;
	float f;
	double d;
}dobj;

union Hello
{
	int x;
	float f;
	double d;
}hobj;

int main()
{
	dobj.x=11;
	dobj.f=3.14;
	dobj.d=5.14;
	
	hobj.x=21;
	hobj.f=3.14;
	hobj.d=5.14;
	
	printf("%d\n",sizeof(dobj));
	printf("%d\n",sizeof(hobj));
	
	printf("%d\n",hobj);

	
	return 0;
	
}
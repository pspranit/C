#include<stdio.h>

struct Demo
{
	int no;
	int *p;
	double f;
};

int main()
{
	int i=11;
	struct Demo obj;
	obj.no=21;
	obj.p=&i;
	obj.f=3.14;
	
	printf("%d\n",sizeof(obj));
	return 0;
}
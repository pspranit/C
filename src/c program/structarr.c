#include<stdio.h>

struct Demo
{
	int no;
	float f;
};

int main()
{
	struct Demo obj[3];
	obj[0].no=11;
	obj[0].f=3.14;
	
	obj[1].no=20;
	obj[1].f=12.50;
	
	obj[2].no=110;
	obj[2].f=33.14;
	
	printf("%d\n",sizeof(obj));
	return 0;
}
	
	
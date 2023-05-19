#include<stdio.h>
//#pragma pack(1)

struct Hello
{
	int no;
	char ch;
	float f;
};
struct Demo
{
	int x;
	char ch1;
	int y;
	
	struct Hello hobj;
};

	int main()
	{
		struct Demo obj;
		obj.x=10;
		obj.y=20;
		obj.ch1='p';
		
		obj.hobj.no=30;
		obj.hobj.f=3.14;
		obj.hobj.ch='s';
		
		printf("%d",sizeof(obj));
		return 0;
	}
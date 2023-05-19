#include<stdio.h>
//#pragma pack(1)

struct demo
{
	int no;
	char ch;
	float f;
	int d;
};

	int main()
	{
	printf("Count the total size of Struct?\n");
	struct demo obj1;
		
	obj1.no=11;
	obj1.ch='p';
	obj1.f=3.14;
	obj1.no=51;
	printf("struct size is:%d",sizeof(obj1));
	
	return 0;
	}
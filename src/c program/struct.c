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
	struct demo obj1;
	obj1.no=11;
	obj1.ch='m';
	obj1.f=3.14;
	obj1.no=51;
 	printf("%d",sizeof(obj1));
	
	return 0;
}

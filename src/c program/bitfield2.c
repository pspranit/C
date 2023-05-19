#include<stdio.h>
#pragma pack(1)

struct Date1
{
	int day;
	int month;
	int year;
}dobj;

struct Date2
{
	 int day:5;
	 int month:4;
	 int year:15;
};

int main()
{
	struct Date2 obj;
	printf("%d\n",sizeof(obj));
	//printf("%d\n",sizeof(dobj));
	return 0;
}

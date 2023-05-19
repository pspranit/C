#include<stdio.h>
void fun()
{
	auto int i=10;
	i++;
	printf("value of i from fun is:%d\n",i);
}
void gun()
{
	static int i=10;
	i++;
	printf("value of i from gun is:%d\n",i);
}
	
int main()
{
printf("Inside main\n");
fun();
gun();
return 0;
}
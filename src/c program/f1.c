#include<stdio.h>
void fun()
{
	int i=10;
	i++;
	printf("value of i from fun is:%d\n",i);
}
void gun()
{
	int i=10;
	i--;
	printf("value of i from gun is:%d\n",i);
}
	
int main()
{
printf("Inside main\n");
fun();
fun();
gun();
return 0;
}
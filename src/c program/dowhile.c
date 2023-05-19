#include<stdio.h>

void display()
{
	int icnt=0;
	icnt=1;
	do
	{
		printf("%d\n",icnt);
		icnt++;
	}while(icnt<=5);
}

int main()
{
	display();
	return 0;
}
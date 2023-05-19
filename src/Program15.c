
#include<stdio.h>

// Input : 3
// Output : 3   2   1

// Input : 7
// Output : 7   6   5   4   3   2   1

void Display(int);         // Declaration

int main()
{
	int ps=0;
	printf("enter no");
	scanf("%d",&ps);
    Display(ps);      // Disaply(3);
    
    return 0;
}

void Display(int ps1)
{
    int i = 0;

    for(i=ps1; i>=1; i-- )
     {
         printf("%d\n",i);
     }
}

#include<stdio.h>

int main()
{
int a;
printf("Enter a number to check it is even or odd:\n");
scanf("%d",&a);
	if(a%2==0)
	{
	printf("%d is an even number\n",a);
	}
	else
	printf("%d is an odd number\n",a);

return 0;
}

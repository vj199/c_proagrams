#include<stdio.h>

int main()
{
int x[100],y[100],z[100];
printf("Enter first binary number:\n");
scanf("%d",x);
printf("Enter second binary number:\n");
scanf("%d",y);
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(x[i]==y[j])
			{
			z[i]=0;
			}
			else
			{
			z[i]=1;
			}
		}
	}
return 0;

}

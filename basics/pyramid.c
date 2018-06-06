#include<stdio.h>

int main()
{
int j,i,n,temp;
printf("Enter the number of rows in pyramid of stars:\n");
scanf("%d",&n);

temp=n;
	for(j=1;j<=n;j++)
	{
		for(i=1;i<temp;i++)   //for printing space
		 printf(" ");   //space
		temp--;     //reduce space in every new line
		for(i=1;i<=2*j-1;i++)
			printf("*");
			printf("\n");
	}
return 0;
}

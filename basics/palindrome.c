#include<stdio.h>

int main()
{
int a,temp,rev=0;
printf("Enter a number:\n");
scanf("%d",&a);

temp = a;

while(temp!=0)
	{
	rev=rev*10;
	rev=rev + temp%10;
	temp=temp/10;
	}
	if(a==rev)
		printf("%d is a palindrome\n",a);
		else
		printf("%d is not a palindrome\n",a);
		
return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
char a[100],i;
printf("Enter a string to check it is a plaindrome or not:\n");
scanf("%s",a); /* take input from user for checking the string */

int l = strlen(a);
for(i=0;i<l/2;i++) /* treverse the given half array */
	{
		if(a[i]!=a[l-1-i]) /*compare the first half and second half of an array*/ 
		{
		printf("Given string is not a palindrome\n");
		break;
		}
	}
		if(i==l/2)
		printf("Given string is palindrome\n");
return 0;
}

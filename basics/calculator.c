#include<stdio.h>

void add(int x,int y)
{
int z=x+y;
printf("Addition of two numbers are: %d\n",z);
}

void subtract(int x,int y)
{
int z=x-y;
printf("Subtraction of two numbers are: %d\n",z);
}

void multiply(int x,int y)
{
int z=x*y;
printf("Multiplication of two numbers are: %d\n",z);
}

void divide(int x,int y)
{
int z=x/y;
printf("Division of two numbers are: %d\n",z);
}

int main()
{
int x,y,operation;
printf("Enter first number:\n");
scanf("%d",&x);
printf("Enter second number:\n");
scanf("%d",&y);
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. multiply\n");
printf("4. Divide\n");
printf("Enter your choice:\n");
scanf("%d",&operation);
switch(operation)
	{
case 1 :
	add(x,y);
	break;
case 2 :
	subtract(x,y);
	break;
case 3 :
	multiply(x,y);
	break;
case 4 :
	divide(x,y);
	break;
default :
	printf("wrong choice\n");
	}

return 0;
}



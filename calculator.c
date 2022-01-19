#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int a=10,b=5;
	printf("Addition of a & b is = %d",add(a,b));
	printf("Subtraction of a & b is = %d",sub(a,b));
}

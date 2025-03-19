#include<stdio.h>
int main()
{
	int f,c;
	printf("Enter the temperature in farenheit:\n");
	scanf("%d" ,&f);
	c=(f-32)*5/9;
	printf("The temp. in celcius is=%d" ,c);
	return 0;
}

#include<stdio.h>
int main()
{
	int p,r,t,R;
	printf("Enter principle,rate of interest,time:\n");
	scanf("%d%d%d" ,&p,&r,&t);
	R=p*r*t/100;
	printf("The simple interest is=%d" ,R);
	return 0;
}


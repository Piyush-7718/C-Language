#include<stdio.h>
int main()
{
	int p1,p2,p;
	printf("Enter the value of Jyo and Rebecca\n");
	scanf("%d%d", &p1,&p2);
	p=p1;
	p1=p2;
	p2=p;
	printf("Exchanged position of Jyo's':- square%d\n",p1);
	printf("Exchanged position of Rebecca's:- square%d",p2);
	return 0;
}

#include<stdio.h>
int main()
{
int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter secound number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	if((a>b)&&(a>c))
		printf("%d is the maximum",a);
	else if(b>c)
		printf("%d is the maximum",b);
	else
		printf("%d is the maximum",c);
	return 0;
}


#include<stdio.h>
int main()
{
	int i,num,flag=0;
	printf("enter the numbers");
	scanf("%d",&num);
	if(num==0||num==1)
	{
		flag=1;
	}
	for(i=2;i<=num/2;++i)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	    printf("prime number");	
	}
	else
	{
		printf("non prime");
	}
	return 0;
}

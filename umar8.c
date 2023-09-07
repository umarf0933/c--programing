#include<stdio.h>
int main()
{
	int mul=1,num;
	do{
		printf("enter the number");
		scanf("%d",&num);
		if(num%2==0)
		{
			mul=mul*num;
		}
	}while(num>=0);
	printf("%d",mul);
	return 0;
}

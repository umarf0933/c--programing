#include<stdio.h>
int main()
{
	int first=0,second=1,next;
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
    next=first+second;
    printf("%d%d",first,second);
	for(i=3;i<=num;i++)
	{
		printf("%d",next);
		first=second;
		second=next;
		next=first+second;
	}
	
	return 0;
}

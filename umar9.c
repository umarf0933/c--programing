#include<stdio.h>
int main()
{
	int num,reverse=0,reminder,original;
	printf("enter the numbers");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		reminder=num%10;
		reverse=reverse*10+reminder;
		num=num/10;
	}
	if(original==reverse)
	{
	printf("pallandrom");
	}
	else
	{
		printf("not pallandrom");
	}
	
	
	
	return 0;
}

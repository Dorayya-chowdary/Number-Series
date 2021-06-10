#include<stdio.h>
#include<math.
int main()
{
	int num,dc=0,a,b=0,res=0,rem;//dc=Digit Count
	scanf("%d",&num);
	a=num;
	while(a)
	{
		a=a/10;
		dc++;
	}
	a=num;
	while(a)
	{
		rem=a%10;	    
		a=a/10;
		res=res+pow(rem,dc);
	}
	if(num==res)
	{
		printf("the given number %d is Armstrong Number",num);
	}
	else
	{
		printf("the given number %d is not Armstrong Number",num);
		
	}

	
	
}

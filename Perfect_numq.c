#include<stdio.h>
int perfect(int n)
{
	int i,a,temp=0;
	a=n/2;
	for(i=1;i<=a;i++)
	{
		if(n%i==0)
		{
			temp+=i;
		}
	}
	return temp;
}
int main()
{
	int num,res;
	printf("Enter  the number:");
	scanf("%d",&num);
	res=perfect(num);
	if(res==num)
	{
		printf("%d is a Perfect Number",num);
	}
	else
	{
		printf("%d is not a Perfect Number",num);
	}
	
}

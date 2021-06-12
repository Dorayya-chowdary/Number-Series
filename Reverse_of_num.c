#include<stdio.h>
int reverse(int num)
{
	int rem,rev=0;
	while(num)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	return rev;
}
int main()
{
	int num,res;
	printf("Enter the num\n");
	scanf("%d",&num);
	res=reverse(num);
	printf("%d",res);
}

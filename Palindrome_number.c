#include<stdio.h>
int palindrome(int num)
{
	int rem,plm=0;
	while(num)
	{
		rem=num%10;
		num=num/10;
		plm=plm*10+rem;
	}
	return plm;
}
int main()
{
	int num,res;
	printf("Enter a Number\n");
	scanf("%d",&num);
	res=palindrome(num);
	if(num==res)
	{
		printf("%d is a palindrome number",res);
	}
	else
	{
		printf("%d is not a palindrome number",res);
	}
	
}

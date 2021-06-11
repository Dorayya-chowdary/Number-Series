def palindrome(num):
    plm=0
    while num:
        rem=num%10
        num=num//10
        plm=plm*10+rem
    return plm
num=int(input())
res=palindrome(num)
if num==res:
    print(num,'is a palindrome')
else:
    print(num,'is not a palindrome')

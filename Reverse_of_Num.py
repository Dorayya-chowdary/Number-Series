def reverse(num):
    a=num
    rev=0
    while a:
        rem=a%10
        a=a//10
        rev=rev*10+rem
    return rev
num=int(input('Enter the number'))
res=reverse(num)
print(res)

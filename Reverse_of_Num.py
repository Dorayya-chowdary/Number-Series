def reverse(num):
    rev=0
    while num:
        rem=a%10
        num=num//10
        rev=rev*10+rem
    return rev
num=int(input('Enter the number'))
res=reverse(num)
print(res)

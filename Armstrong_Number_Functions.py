def armstrong(num):
    a=num
    count=0
    while a:
        count+=1
        a=a//10
    a=num
    arm=0
    while a:
        rem=a%10
        a=a//10
        arm=arm+pow(rem,count)
    return arm
num=int(input())
res=armstrong(num)
if num==res:
    print(num,'is a armstrong number')
else:
    print(num,'is not a armstrong number')

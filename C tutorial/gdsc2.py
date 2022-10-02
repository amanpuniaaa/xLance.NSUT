a=input("")
b=a.split(" ")
num1=int(b[0])
num2=int(b[1])
num3=int(b[2])

count=0
if((num2-num1)%num3==0):
    print(int((num2-num1)/num3))
else:
    print(-1)
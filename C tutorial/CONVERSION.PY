a=input("")
b=a.split(" ")
num1=int(b[0])
num2=int(b[1])
count=0
if(num2%3==0):

    k=((num2-num1)//3-1)
else:
    k=(num2-num1)//3

count+=k
num1+=3*(k)
print(num1)

while(num1>num2):
    count+=1
    num1=num1-1
else:
    pass

print(count)





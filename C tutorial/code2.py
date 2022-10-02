import random


n=int(input(""))

for i in range(n):
    for j in range(i+1):
        if(j%2==0):
            print(chr(j+65),end="")
        else:
            print(j+1,end="")
       
    print("")

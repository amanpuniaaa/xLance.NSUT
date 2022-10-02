import math
import random

arr=[]
m=input("")
b=m.split(" ")

for i in range(0,int(b[1])):
    for j in range(0,int(b[0])):

        if ((i==0 or i==int(b[1])-1) and (j==0 or j==(int(b[0]-1))):
            print("#",end="") 
        else:
            print("*",end="")
    print("")

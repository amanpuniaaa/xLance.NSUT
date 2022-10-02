import random

members=[]
n=(len(members)//5 )+1

for i in range(n):
    print("Team No : ",i+1)
    for j in range(5):
      
        member=random.choice(members)
        if(len(members)!=0):
            print(member)
        else:
            continue
        members.remove(member)
    print("---------------")    
        

        
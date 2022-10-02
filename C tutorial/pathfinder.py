n=int(input(""))


def Sort(sub_li):
    l = len(sub_li)
    for i in range(0, l):
        for j in range(0, l-i-1):
            if (int(sub_li[j][1]) > int(sub_li[j + 1][1])):
                tempo = sub_li[j]
                sub_li[j]= sub_li[j + 1]
                sub_li[j + 1]= tempo
    return sub_li
  
for a in range(n):
    mainn=input("")
    numss=mainn.split(" ")

    cols=int(numss[0])
    rocks=int(numss[1])

    rockarray=[]
    i=1

    for i in range(rocks):
        mainns=input("")
        numsss=mainns.split(" ")
        rockarray.append(numsss)
    
    rockarray=Sort(rockarray)
   

    
    
    
    for j in range(rocks-1):
        if(rockarray[j][1]==rockarray[j+1][1]):
            print("NO")
            i=0
            break
        elif((int(rockarray[j][1])==(int(rockarray[j+1][1])-1) )and (int(rockarray[j][0])==1) and(int(rockarray[j][0])==2)):
            print("NO")
            i=0
            break
        elif((int(rockarray[j][1])==(int(rockarray[j+1][1])+1) )and (int(rockarray[j][0])==2) and(int(rockarray[j][0])==1)):      
            print("NO")
            i=0
            break
        else:
            continue  


if(i==1):
    print("YES")
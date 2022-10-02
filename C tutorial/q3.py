n=int(input(""))
for a in range(n):
    inn=input("")
    innarr=inn.split(" ")
    days=int(innarr[0])
    maxd=int(innarr[1])

    daylisdewdst=input("")
    daylist=daylisdewdst.split(" ")
    maxday=0
 

    for b in range(days):
        if((int(daylist[b])<maxd) and ((int(daylist[b])>maxday))):

            maxday=int(daylist[b])
        elif((int(daylist[b])>maxd)):
            maxday=maxd
            break
    print(maxday)


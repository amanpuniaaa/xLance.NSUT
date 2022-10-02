def triangle(n):
    m=0
 
  

    k = 0

    for i in range(1, n+1):
        for space in range(1, (n-i)+1):
            print(end="  ")
        t=m
    
        while k!=(2*i-1):
           

            if(k==(2*i-2)):
                if(k==2):
                    print("1",end="")
                else:
                     print(m,end="")
            elif(k==0):
                print(str(m)+" ", end="")


            else:
                print(str(t+k)+" ", end="")
                m+=t+k
            k += 1

    
        k = 0
        

        print("")
        



n = int(input(""))

triangle(n)
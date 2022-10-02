def triangle(n):
    m=0
 
  

    k = 0

    for i in range(1, n+1):
        for space in range(1, (n-i)+1):
            print(end="  ")
    
        while k!=(2*i-1):
            
           

            if(k==(2*i-2)):
                if(k==2):
                    print("1",end="")
                else:
                     print(m,end="")
            else:
                if(k==0 and i==2):
                    t=k

                    print(str(t)+" ", end="")
                elif(k==1 and i==2):
                    t=k
                    print(str(t)+" ", end="")
                else:
                    t=k+1
                    print(str(t)+" ", end="")
                    m+=t

            k += 1
    
        k = 0

        print("")
        m=0



n = int(input(""))

triangle(n)
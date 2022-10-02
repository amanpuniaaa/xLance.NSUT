
def code(n):
    solu=[None]*(n+1)
    solu[0]=0
    solu[1]=0
    for i in range(n+1):
        if solu[i]==0:
            for j in [i+2,i+3,i+5]:
                if j<n+1:
                    solu[j]=1
        elif solu[i] is None:
            for j in [i-2, i-3, i-5]:
                if j>0 and solu[j]!=1:
                    print('??',i,j,solu[j])
            solu[i]=0
            for j in [i+2,i+3,i+5]:
                if j<n+1:
                    solu[j]=1
    return solu

m=code(51) #since 50 is the constraint
for _ in range(int(input().strip())):
    if(m[int(input().strip())]):
        print("SUSHANT")
    else:
        print("RIYA")

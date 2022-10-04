import time
def progress_bar(n):
    not_fill='-'
    fill='█'
    print('|'+not_fill*20+'|','0%',end='\r')
    for i in range(1,n+1):
        len_fill=int((i/n)*20)
        len_not_fill=20-len_fill
        print('|'+(fill*len_fill)+(not_fill*len_not_fill)+'|',round((i/n)*100,2),'%','Progress :'+str(i)+'/'+str(n),end='\r')
        time.sleep(0.25)
progress_bar(25)
input()

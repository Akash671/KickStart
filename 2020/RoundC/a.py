for i in range(int(input())):
    n,cd=map(int, input().split())
 #   for j in range(n):
    a = list(map(int, input().split()[:n]))
    c=0
    for i1 in range(n):
        if a[i1]==cd:
          #  print(i1)
        #    t=i1
       #     s=0
            for j1 in range(cd):
                if i1<n and ((a[i1])==(cd-j1)) :
                    i1+=1
                    d=cd-j1
                  #  s=1
                    if (d==1):
                        c+=1
                        break
                else:
                     break
           #     print(i1)
             
    print("Case #"+str(i+1)+":", c)  

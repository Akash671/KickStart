"""author    : Akash kumar 
   kickstart : Akash@1996"""

T=int(input())
for i in range(1,T+1):
    n=int(input())
    c=0
    arr=list(map(int,input().split()[:n]))
    for j in range(1,n-1):
        if arr[j]>arr[j-1] and arr[j]>arr[j+1]:
            c+=1
    print("Case #"+str(i)+":", c)

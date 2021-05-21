"""author : Akash kumar """

for t in range(int(input())):
    N,K,S=map(int,input().split())
    c1=N+K
    c2=(K-S)+(K-1)+(N-S+1)
    if c1>=c2:
        print("Case #"+str(t+1)+":",c2)
    else:
        print("Case #"+str(t+1)+":",c1)
        

"""
author             :    Akash kumar
kickstart username :    Akash@1996
"""

T=int(input())
for t in range(1,T+1):
    n=int(input())
    s=str(input())
    a=[]
    S=""
    S+=s[0]
    a.append(S)

    for i in range(n-1):
        j=i+1
        #c=0
        if s[i]<s[j]:
            S+=s[j]
            a.append(S)
        else:
            a.append(s[j])
            S=""
            S+=s[j]
    print("Case #"+str(t)+": ",end="")
    for k in range(n):
        print(str(len(a[k])),end=" ")
    print()

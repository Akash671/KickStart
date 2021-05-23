"""
author             : Akash kumar
kickstart username : Akash@1996
"""

for t in range(1,int(input())+1):
 c=0
 def printAllKLength(set, k,s):
    n = len(set) 
    return printAllKLengthRec(set, "", n, k,s)
 def printAllKLengthRec(set, prefix, n, k,bb):
       if k == 0 :
       # bb='bc'
        pp=prefix[::-1]
        if pp==prefix and prefix<bb:
           global c
           c+=1
        return
       for i in range(n):
        newPrefix = prefix + set[i]
        printAllKLengthRec(set, newPrefix, n, k - 1,bb)
       return c
 n, k=map(int, input().split())
 s=str(input())
 ch="abcdefghijklmnopqrstuvwxyz"
 ss=[]
 for i in range(k):
    ss.append(ch[i])
 print("Case #"+str(t)+": ",printAllKLength(ss,n,s)%1000000007)

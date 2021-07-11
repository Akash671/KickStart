"""
google kick start round D
author   : Akash Kumar
username : Akash@1996
"""

T=1
for _ in range(int(input())):
  G00,G01,G02=map(int,input().split())
  G10,G12=map(int,input().split())
  G20,G21,G22=map(int,input().split())
  ans=[]
  c=0
  for i in range(-50,51,1):
        if G01-G00==G02-G01:
           c+=1
        if i-G10==G12-i:
          c+=1
        if G21-G20==G22-G21:
          c+=1
        if G10-G00==G20-G10:
          c+=1
        if i-G01==G21-i:
          c+=1
        if G12-G02==G22-G12:
          c+=1
        if i-G00==G22-i:
          c+=1
        if i-G02==G20-i:
          c+=1
        ans.append(c)
        c=0
  #print(ans)
  print("Case #"+str(T)+": "+str(max(ans)))
  T+=1

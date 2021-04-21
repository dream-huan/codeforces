s='abcdefgesfhberuvew'
ts=list(s)
for i in range(0,len(s)):
    ts[i]=chr(ord(ts[i])+3)
ns=""
for i in range(0,len(s)):
    ns=ns+ts[i]
print(s)
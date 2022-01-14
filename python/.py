from string import digits
from random import choice

z="".join(choice(digits) for i in range(1000))
result={}
for ch in z:
    result[ch]=result.get(ch,0)+1
for digits,fre in sorted(result.items()):
    print(digits,fre,sep=":")

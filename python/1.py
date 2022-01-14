def divide(num):
    b=list()
    for i in range(int(num-1),1,-1):
        if num%i==0:
            num=num/i
            b.append(int(num))
            b.append(i)
            break
    return b

def listdivide(b):
    for i in range(0,len(b)):
        l=divide(b[i])
        if len(l)!=0:
            del b[i]
            for j in l:
                b.append(j)
    return b



a=int(input())
b=list()
for i in range (a-1,int(a**0.5)-1,-1):
    if a%i==0:
        b.append(i)
        b.append(int(a/i))
        break

while 1:
    left=len(b)
    b=listdivide(b)
    if left==len(b):
        break

if len(b)==0:
    b.append(a)
    print(b)
else:
    print(b)

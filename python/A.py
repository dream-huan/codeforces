# s='abcdefgesfhberuvew'
# ts=list(s)
# for i in range(0,len(s)):
#     ts[i]=chr(ord(ts[i])+3)
# ns=""
# for i in range(0,len(s)):
#     ns=ns+ts[i]
# print(s)


# s=input()
# ns=""
# for i in range(0,len(s)):
#     if i!=len(s)-1:
#         ns=ns+chr(abs(ord(s[i])-ord(s[i+1])))
#     else:
#         ns=ns+chr(abs(ord(s[i])-ord(s[0])))
# print(ns)

# s=input()

# print('第一种:\n')
# print(s==s[::-1])

# print('\n第二种:\n')
# for i in range(0,len(s)):
#     if s[i]!=s[len(s)-i-1]:
#         print("False")
#         exit(0)
# print("True")

# with open("1.txt",encoding="utf") as fp:
#     fp.seek(300)
#     print(fp.read(50))
#     fp.seek(450)
#     print(fp.read(50))


# from openpyxl import load_workbook

# wb=load_workbook('1.xlsx')
# ws=wb.worksheets[0]

# for i,row in enumerate(ws):
#     if i==0:
#         titles=tuple(map(lambda cell:cell.value,row))


# import pandas as pd
# pd=read_excel('1.xlsx')
# pd=pd.loc[:,['列名']].groupby('列名',as_index=False).sum()




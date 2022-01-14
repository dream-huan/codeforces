#使用前提条件：cmd 输入pip install xlrd==1.2.0

import xlrd,xlwt
from xlutils.copy import copy

ex=xlrd.open_workbook("每个人的爱好.xlsx")

wb = copy(ex)

sh1 = wb.get_sheet(0)

sh1.write(8,0,"")
sh1.write(0,8,"所有爱好")

list=[]

for sh in ex.sheets():
    for r in range(1,sh.nrows):
        for c in range(1,sh.ncols):
            if(sh.cell_value(r,c)=="是"):
                list.append(sh.cell_value(0,c))
                list.append(",")
        if len(list)>=1:
            list[len(list)-1]=""
        sh1.write(r,8,list)
        list.clear()

wb.save("每个人的爱好.xlsx")

# print("各个员工销售额：")
# print(dict)

# dict.clear()

# for sh in ex.sheets():
#     for r in range(3,sh.nrows):
#         # 输出指定行
#         if dict.get(sh.cell_value(r,3)):
#             dict[sh.cell_value(r,3)]=dict[sh.cell_value(r,3)]+sh.cell_value(r,4)
#         else:
#             dict[sh.cell_value(r,3)]=sh.cell_value(r,4)

# print("各个时间段销售额：")
# print(dict)

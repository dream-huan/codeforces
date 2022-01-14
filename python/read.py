with open('1.txt',encoding='utf') as fp:
    fp.seek(300) #UTF8中一个中文文字占据3-4个字符
    print(fp.read(50))
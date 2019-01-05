def trangles():
    L = [1] # 初始值
    while True:
        yield(L)
        maxIndex = len(L)-1 # 最大下标，下标从0开始
         # range(0,n)时，取的是0~(n-1)范围的数
         # 第二次获取时,len=1,range(0)=[],因此k=[],L=[1,1]
         # 第三次获取时,len=2,range(0,1)=[0],k=[2],L=[1,2,1]
         # 第四次获取时,len=3,range(0,2)=[0,1],k=[L[0]+L[1],L[1]+L[2]]]=[3,3],L=[1,3,3,1]
        k = [L[j]+L[j+1] for j in range(maxIndex)]
        L = [1]+k+[1]
n=0
for i in trangles():
    print(i)
    n=n+1
    if n==10:
        break
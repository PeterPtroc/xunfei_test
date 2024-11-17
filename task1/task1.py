import numpy as np
#np.set_printoptions(precision=1,floatmode='fixed')


n = 0

n = input("请输入矩阵的阶数：")
n = int(n)

a = np.zeros((n,n))

print("请输入数据：")
#输入
for i in range(n):
    a[i] = input().split()
    for j in range(n):
        a[i][j] = float(a[i][j])

A = np.matrix(a)

#处理不可逆情况
try:
    A = A.I
except:
    print("矩阵不可逆")
    exit()

#输出
for i in range(A.shape[0]):
    for j in range(A.shape[1]):
        print(f"%.1f"%A[i,j],end="\t")
    print()
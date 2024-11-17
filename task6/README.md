# 题目：使用 C++ 和 Python 实现直角三角形边长计算

## 对于C++即服务端部分

服务端运行于localhost:12345

### 环境准备

首先参照这个[链接](https://cloud.tencent.com/developer/article/1386141)编译安装好boot

### 补全求第三边逻辑

计算非常简单，外加判断传入的边必须大于等于0，否则返回-1，在客户端处理-1逻辑

### 创建cmake文件，并编译运行

编译运行参照以下步骤
```bash
mkdir build

cd build

cmake ..

make

./server
```
然后挂在后台即可


## 对于python即客户端部分

### 代码说明

创建一个socket连接localhost:12345，如果连接不成功抛出一个错误
然后读取两个边，按服务器要求格式编码，发送
接收并解码服务器返回的数据，额外处理-1情况下的逻辑
输出

### 使用说明

在server运行的情况下，解释运行clint.py，按提示输入即可

import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#尝试连接服务器
try:
    s.connect(('localhost', 12345))
except ConnectionRefusedError:
    print('无法连接至服务器，可能是服务器未启动')
    exit()
print('连接成功')

a = float(input('请输入第一条直角边的长度: '))
b = float(input('请输入第二条直角边的长度: '))
message = f'{a} {b}'
s.send(message.encode())

#接收并解码
response = s.recv(1024)
c = float(response.decode())
if(c == -1):
    print('输入的两条直角边长度不合法')
else:
    print(f'斜边长度: {c}')

s.close()


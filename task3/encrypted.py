
def xor_encryption(text, key):
    encrypted_text = ""
    
    # 遍历进行异或操作
    for i in range(len(text)):
        encrypted_text += chr(ord(text[i]) ^ ord(key[i % len(key)]))
    
    return encrypted_text

# 打开文件
with open("input.txt", "r") as f:
    plain_text = f.read()

key = "20245363"


encrypted_text = xor_encryption(plain_text, key)

#输出和保存
print(f'加密后为: {encrypted_text}')

with open("encrypted.txt", "w") as f:
    f.write(encrypted_text)
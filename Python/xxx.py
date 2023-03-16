a = int(input("2~9사이의 숫자를 입력하세요: "))
b = 1
while b < 10:
    c = a * b
    print(a ,"x", b, "=", c)
    b += 1
    if b == 10: break
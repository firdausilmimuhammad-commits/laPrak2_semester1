a = int(input())

if a == 0:
    print("nol")
elif a < 0:
    print("Input tidak valid")
elif a < 10:
    print("satuan")
elif a < 20:
    print("belasan")
elif a < 100:
    print("puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
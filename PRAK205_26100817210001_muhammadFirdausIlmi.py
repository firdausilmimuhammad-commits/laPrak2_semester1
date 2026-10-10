import math

A, B = map(int, input().split())

C = math.sqrt(int(B**2 - A**2))

around = A + B + C
area = 0.5 * A * C

print("Alas =", f"{C:.0f}", "cm")
print("Tinggi =", f"{A:.0f}", "cm")
print("Keliling =", f"{around:.0f}", "cm")
print("Luas =", f"{area:.0f}", "cm^2")
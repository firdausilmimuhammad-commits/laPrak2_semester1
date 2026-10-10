import math

radius, height = map(float, input().split())
pi = 22/7

volume = pi * radius ** 2 * height
area = 2 * pi * radius * (radius + height)
around = 2 * pi * radius

print("Volume =", f"{volume:.2f}")
print("Luas =", f"{area:.2f}")
print("Keliling =", f"{around:.2f}")